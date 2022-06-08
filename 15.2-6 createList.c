#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
int main(int argc, char *argv[]) {
	return 0;
}
