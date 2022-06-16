#include <stdio.h>
#include <stdlib.h>
#include "17 -0616.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct node *first, *current, *previous, *node;
	srand(time(NULL));
	int i, num, item;
	printf("�п�J��Ƶ���:");
	scanf("%d", &num);
	int arr[num] ;
	for(i=0;i<num;i++){
		arr[i] = (rand()%100)+1;
	}
	first = createList(arr, num);
	for(i=0;i<num;i++){
		printf("%d\n", arr[i]);
	}
	printf("\n���ͦ�C��I�s�C�L�����:\n");
	printList(first);
	
	printf("\n�аݭn�b�ĴX�Ӹ`�I�N�s����Ʃ�J:");
	scanf("%d", &node); 
	item = (rand()%100)+1;
	//node=searchNode(first,38);
	node=searchNode(first,node);  //���d�ߦA�s�W 
	//insertNode(node,46);
	insertNode(node, item);
	printf("\n���J��� �N��ƦC�L:\n");
	printList(first);
	
	printf("\n�аݭn�R������Ƭ�:");
	scanf("%d", &node);
	//node = searchNode(first, 38);
	node=searchNode(first,node);  //���d�ߦA�R�� 
	//first = deleteNode(first, node);
	first = deleteNode(first, node);
	printf("\n��ƧR�� �N��ƦC�L:\n");
	printList(first);
	
	freeList(first);
	system("pause");
	return 0;
}
//�إ��쵲
struct node *createList(int *arr,int len){
	int i;
	struct node *first, *current, *previous;
	for(i=0;i<len;i++){
		current = (struct node *) malloc(sizeof(struct node));
		current->data=arr[i];
		if(i==0)
			first=current;
		else
			previous->next=current;
		current->next=NULL;
		previous=current;
	}
	return first;
}


//�L�X
void printList(struct node* first){
	struct node* node=first;
	if(first==NULL)
		printf("List is empty!\n");
	else{
		while(node!=NULL){
			printf("%3d", node->data);
			node=node->next;
		}
		printf("\n");
	}
}

//�M�� 
void freeList(struct node* first){
	struct node *current, *tmp;
	current=first;
	while(current!=NULL){
		tmp=current;
		current=current->next;
		free(tmp);
	}
} 

//�d�� 
struct node *searchNode(struct node *first, int item){
	struct node *node=first;
	while(node!=NULL){
		if(node->data==item)
			return node;
		else
			node=node->next;
	}
	return NULL;
}

//�s�W 
void insertNode(struct node *node, int item){
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	newnode->data=item;
	newnode->next=node->next;
	node->next=newnode;
}
//�R�� 
struct node *deleteNode(struct node *first, struct node *node){
	struct node *current = first;
	if(first==NULL){
		printf("Nothing to delete!\n");
		return NULL;
	}
	if(node==first){
		first = first->next;
	}	
	else{
		while(current->next!=node){
			current = current->next;
		}	
		current->next = node->next;
	}
	free(node);
	return first;
}
