#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f ( int n ){
	if(n>0)
		return 2*f(n-1) -5;
	else 
		return 3;
}
int main(int argc, char *argv[]) {
	int n ;
	printf("��J�@�Ӿ�� n :") ;
	scanf("%d",&n);
	printf("��X f( %d ) = %d",n,f(n));
	return 0;
}
