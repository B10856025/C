#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int mod(int x, int y){
	return x % y ;
}
int main(int argc, char *argv[]) {
	int x,y;
	do{
		printf("輸入兩個整數:");
		scanf("%d %d",&x,&y);
		printf("%d / %d 的餘數 = %d\n",x,y,mod(x,y));
	}while(y!=0);
	return 0;
}
