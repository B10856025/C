#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char n1[10],n2[10],n3[10],n4[10]; //�ŧi�r���}�C 
	float h,h1,h2,h3,h4;
	float w,w1,w2,w3,w4;
	printf("��J�|�ӨϥΪ̩m�W�B �������魫-----\n");
	printf("��J�|�өm�W: (�H�Ů�j�})\n");
	scanf("%s %s %s %s",&n1,&n2,&n3,&n4);
	printf("�Ĥ@�쨭�����魫:\n");
	scanf("%f %f",&h1,&w1);
	printf("�ĤG�쨭�����魫:\n");
	scanf("%f %f",&h2,&w2);
	printf("�ĤT�쨭�����魫:\n");
	scanf("%f %f",&h3,&w3);
	printf("�ĥ|�쨭�����魫:\n");
	scanf("%f %f",&h4,&w4);
	h=h1+h2+h3+h4;
	w=w1+w2+w3+w4;
	printf("�m�W:%s�B%s�B%s�B%s\n",n1,n2,n3,n4);
	printf("��������:%.2f\n�����魫:%.2f",h,w);
	return 0;
}
