#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SQRT(int n){
	int i=0, j=0;
	for(i=1;j<n;i++){
		j=i*i;
	}
	if(j==n) 
		return i-1 ;
	else 
		return i-2 ;
}
int main(int argc, char *argv[]) {
	int num;
	printf("��J���:");
	scanf("%d",&num);
	printf("��J�G %d�A��X�G�̱��񪺭Ȭ� %d\n",num,SQRT(num));
	
	return 0;
}
