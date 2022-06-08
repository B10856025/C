#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct node{
		int id;
		int data;
		struct node *next;
	};
	int n, i;
	struct node *ptr;
	printf("請輸入資料筆數:");
	scanf("%d", &n);
	ptr = (struct node*) malloc(n*sizeof(struct node));
	srand(time(NULL));
	for(i=0;i<n;i++){
		fflush(stdin);
		(ptr+i)->id	= i+1;
		(ptr+i)->data	= (rand()%100)+1;
		(ptr+i)->next = (ptr+i+1);
	}
	for(i=0;i<n;i++){
		printf("%2d %d ", ptr->id, ptr->data);
		printf("%d\n",ptr->next);
		ptr = ptr+1;
	}
	free(ptr);
	return 0;
}
