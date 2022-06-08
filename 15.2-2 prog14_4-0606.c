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
	NODE *first, *current, *previous;  //建立三個指向NODE的指標 
	printf("Number of nodes:");
	scanf("%d", &num);
	
	for(i=0;i<num;i++){
		current = (NODE *) malloc(sizeof(NODE));  //建立新的節點
		printf("Data for node %d: ", i+1);
		scanf("%d", &(current->data));
		if(i==0)
			first=current;  //把指標first指向目前的節點 
		else
			previous->next=current;  //把前一個節點的next指向目前的節點 
		current->next=NULL;       // 把目前的節點的next指向NULL 
		previous=current;         // 把前一個節點設成目前的節點 
	}
	current=first;                  //設定current為第一個節點 
	while(current!=NULL){
		printf("address=%p, ", current);
		printf("data=%d, ", current->data);
		printf("next=%p\n", current->next);
		current=current->next;     //設定current指向下一個節點 
	} 
	system("pause");
	return 0;
}
