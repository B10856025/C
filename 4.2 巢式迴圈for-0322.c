#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	printf("-輸出九九乘法表-\n");
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
	//巢式迴圈
	int num;
	printf("\ninput a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=1;i<=num;i++){
		for(j=num;j>i;j--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
