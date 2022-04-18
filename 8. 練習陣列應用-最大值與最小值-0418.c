#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,A[5],min,max;
	for(i=0;i<5;i++){
		printf("input A[%d] a int:",i);
		scanf("%d",&A[i]);
	}
	for(i=0;i<5;i++){
		printf("A[%d]=%d \n",i,A[i]);
	}
	min=max=A[0];
	for(i=1;i<5;i++){
		if(A[i]>max)
			max=A[i];
		if(A[i]<min)
			min=A[i];
	}
	for(i=1;i<5;i++){
		if(A[i]==max)
			printf("A[%d]材%d",i,i+1);
	}
	printf("程计:%d\n",max);
	printf("程计:%d",min);
	return 0;  
}
