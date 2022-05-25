#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node{
		int data;
		struct node *next;
};
typedef struct node NODE;
int main(int argc, char *argv[]) {
	NODE a, b, c;
	NODE *ptr=&a;
	a.data = 12;
	a.next = &b;
	b.data = 30;
	b.next = &c;
	c.data = 64;
	c.next = NULL;
	while(ptr!=NULL){
		printf("adress = %p, ", ptr);
		printf("data = %d, ", ptr->data);
		printf("next = %p\n", ptr->next);
		ptr = ptr->next;
	}
	
	/*int *ptr, i;
	ptr=(int *) malloc(3*sizeof(int));
	*ptr=12;
	*(ptr+1)=35;
	*(ptr+2)=140;
	for(i=0;i<3;i++)
		printf("*ptr+%d=%d\n", i, *(ptr+i));
	free(ptr);
	
	int num ,k;
	struct student{
		char name[10];
		int score;	
	};
	struct student *prt;
	printf("Number of student: ");
	scanf("%d", &num);
	prt=(struct student *) malloc(num*sizeof(struct student));
	for(k=0;k<num;k++){
		fflush(stdin);
		printf("name for student %d: ",k+1);
		gets((prt+k)->name);
		printf("score for student %d: ",k+1);
		scanf("%d", &(prt+k)->score);
	}
	for(k=0;k<num;k++){
		printf("%s: score=%d\n",(prt+k)->name, (prt+k)->score);
	}
	free(prt);*/
	return 0;
}
