#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//1.�P�_��J���O�j�g�^��r�B�p�g�^��r �άO���ԧB�Ʀr
	char ch;
	printf("��J�@�Ӧr��:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("�j�g�^��r��");
	else if(ch>='a'&&ch<='z')
		printf("�p�g�^��r�� ");
	else
		printf("���ԧB�Ʀr");
	
	//2.�g�@�ӵ{���P�_��J������O���өu�`�C
	int month;
	printf("\n��J���:");
	scanf("%d",&month);
	if(month<6 && month>2) 
		printf("%d��O�K�u",month);
	if(month<9 && month>5) 
		printf("%d��O�L�u",month);
	if(month<12 && month>8) 
		printf("%d��O��u",month);
	if(month==12||month==1||month==2) 
		printf("%d��O�V�u",month);
	else printf("�S�o�Ӥ��");
	return 0;
}
