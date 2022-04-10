#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void A(int a){
		int b,temp;
		if(a>10){
			temp = a/10;
			b = a % 10;
			a = temp;
			printf("%d",b);
			A(temp);
		}
		else printf("%d",a);
}
int main(int argc, char *argv[]) {
	int i = 9456002 ;
	A(i);
	return 0;
}
