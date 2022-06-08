#include <stdio.h>
#include <stdlib.h>
#include "16 -0608.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//�w�w�Ƨ� 
struct node *bubbleSortList(struct node *first) {
	struct node *tmp, *current, *previous;
	int i, j;
	for(i=0;i<6;i++) {
        current = first;
        previous = first;
        for(j=0;j<6 && current->next;j++) {
            if(current->data > current->next->data) {
                tmp = current->next;
                current->next = tmp->next;
                tmp->next = current;
                if(current == first) {
                    first = tmp;
                    previous = tmp;
                } else {
                    previous->next = tmp;
                    previous = previous->next;
                }
            } else {
                current = current->next;
                if(j!=0) previous = previous->next;
            }
        }
    }
    return first;
}
//���c�s�Jout.txt�� 
int save(struct node *first)
{
	FILE *fptr;
	if((fptr=fopen("16.3-2 out.txt","wb+"))==NULL){
		printf("��󥴶}����\n");
	}
	while(first!=NULL){	
		fprintf(fptr, "id= %d ", first->id);
    	fprintf(fptr, "data= %d\n", first->data);
    	first=first->next;
	}
	fclose(fptr);
	return 0;
}
//�D�{�� 
int main(void) {
	struct node *first, *current, *previous;
	FILE *fptr;
	int arr[20];
	int i=0, num;
	fptr = fopen("16.3-1 test.txt","r");
	if(fptr!=NULL){
		while(fscanf(fptr, "%d", &num)>0){
			arr[i] = num;
			i++;
		}
		fclose(fptr);
		int i;
		for(i=0;i<6;i++){
			printf("\n%d",arr[i]);
		}
		printf("\n");
	} 
	else{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	//int arr[] = {1, 23, 56, 44, 36, 58};
	first = createList(arr, 6);
	printf("�Ƨǫe:\n");
	printList(first);
	printf("�Ƨǫ�:\n");
	bubbleSortList(first);
	first = reverse(first);
	printList(first);
	save(first);
	return 0;
}
//�إ��쵲 
struct node *createList(int *arr, int len){
	int i ;
	struct node *first, *current, *previous;
	for(i=0;i<len;i++){
		current = (struct node *) malloc(sizeof(struct node));
		current->id = i+1;
		current->data = arr[i];
		if(i==0)
			first = current;
		else
			previous->next = current;
		current->next = NULL;
		previous = current;	
	}
	return first;
}
//�L�X 
void printList(struct node *first){
	struct node *current = first;
	if(first==NULL)
		printf("List is empty!\n");
	else{
		while(current!=NULL){
			printf("id = %d ", current->id);
			printf("dtat = %d\n", current->data);
			current=current->next;
		}
		printf("\n");
	}
}
//���� ���c 
struct node *reverse(struct node *first) {
	struct node* previous = NULL;
	struct node* current = first;
	struct node* nxt;
	while (current != NULL) {
  // �������
		nxt = current->next;
		current->next = previous;
  // ���ʫ���
		previous = current;
		current = nxt;
 	}
 	first = previous;
 	return first;
}

