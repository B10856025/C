#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
int main(int argc, char *argv[]) {
	int i,val,num;
	NODE *first, *current, *previous;  //�إߤT�ӫ��VNODE������ 
	printf("Number of nodes:");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		current = (NODE *) malloc(sizeof(NODE));  //�إ߷s���`�I
		printf("Data for node %d: ", i+1);
		scanf("%d", &(current->data));
		if(i==0)
			first=current;  //�����first���V�ثe���`�I 
		else
			previous->next=current;  //��e�@�Ӹ`�I��next���V�ثe���`�I 
		current->next=NULL;       // ��ثe���`�I��next���VNULL 
		previous=current;         // ��e�@�Ӹ`�I�]���ثe���`�I 
	}
	current=first;                  //�]�wcurrent���Ĥ@�Ӹ`�I 
	while(current!=NULL){
		printf("address=%p, ", current);
		printf("data=%d, ", current->data);
		printf("next=%p\n", current->next);
		current=current->next;     //�]�wcurrent���V�U�@�Ӹ`�I 
	} 
	system("pause");
	return 0;
}
