#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	NODE *first;
	int arr[] = {14,27,32,46};
	first = createList(arr, 4);
	printList(first);
	freeList(first);
	system("pause");
	return 0;
}
NODE *createList(int *arr,int len){
	int i;
	NODE *first, *current, *previous;
	for(i=0;i<len;i++){
		current = (NODE *) malloc(sizeof(NODE));
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
void printList(NODE* first){
	NODE* node=first;
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
void freeList(NODE* first){
	NODE *current, *tmp;
	current=first;
	while(current!=NULL){
		tmp=current;
		current=current->next;
		free(tmp);
	}
} 
