#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float h1,w1,h2,w2;
	printf("�п�J�ϥΪ�1���������魫:\n") ;
	scanf("%f %f",&h1,&w1);
	printf("�п�J�ϥΪ�2���������魫:\n") ;
	scanf("%f %f",&h2,&w2);
	printf("��������:%f\n",(h1+h2)/2);
	printf("�����魫:%f\n",(w1+w2)/2);
	return 0;
}
