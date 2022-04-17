#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float h1,w1,h2,w2;
	printf("請輸入使用者1的身高及體重:\n") ;
	scanf("%f %f",&h1,&w1);
	printf("請輸入使用者2的身高及體重:\n") ;
	scanf("%f %f",&h2,&w2);
	printf("平均身高:%f\n",(h1+h2)/2);
	printf("平均體重:%f\n",(w1+w2)/2);
	return 0;
}
