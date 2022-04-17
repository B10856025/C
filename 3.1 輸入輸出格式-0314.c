#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char n1[10],n2[10],n3[10],n4[10]; //宣告字元陣列 
	float h,h1,h2,h3,h4;
	float w,w1,w2,w3,w4;
	printf("輸入四個使用者姓名、 身高及體重-----\n");
	printf("輸入四個姓名: (以空格隔開)\n");
	scanf("%s %s %s %s",&n1,&n2,&n3,&n4);
	printf("第一位身高及體重:\n");
	scanf("%f %f",&h1,&w1);
	printf("第二位身高及體重:\n");
	scanf("%f %f",&h2,&w2);
	printf("第三位身高及體重:\n");
	scanf("%f %f",&h3,&w3);
	printf("第四位身高及體重:\n");
	scanf("%f %f",&h4,&w4);
	h=h1+h2+h3+h4;
	w=w1+w2+w3+w4;
	printf("姓名:%s、%s、%s、%s\n",n1,n2,n3,n4);
	printf("平均身高:%.2f\n平均體重:%.2f",h,w);
	return 0;
}
