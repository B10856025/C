#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//1.��Jx, y�y�ЭȡA�P�_���I�����@�ӶH���άO�b�y�жb�W
	int x, y;
	printf("��Jx, y�y�Э�:");
	scanf("%d %d",&x,&y);
	if(x<0&&y<0)
		printf("�b�ĤT�H��");
	if(x>0||y>0)
		if(x>0&&y>0)
			printf("�b�Ĥ@�H��");
		if(x>0&&y<0)
			printf("�b�ĥ|�H��");
		if(x<0&&y>0)
			printf("�b�ĤG�H��");
	if(x==0||y==0)
		if(x==0&&y==0)
			printf("�b���I");
		if(x==0&&y!=0)
			printf("�by�b�W");
		if(x!=0&&y==0)
			printf("�bx�b�W");
	
	//2.�p��M��ܩһݹB�O+���y�B�z�O
	int spend = 199;
	int kg=0, sum=0;
	printf("\n\n��J�ʪ����q:");
	scanf("%d",&kg);
	if(kg<5){
		sum = kg*50;
		printf("�һݹB�O%d+���y�B�z�O%d=%d",spend,sum,spend+sum);
	}
	else{
		sum = (kg-5)*30 + 5*50;
		printf("�һݹB�O%d+���y�B�z�O%d=%d",spend,sum,spend+sum);
	}
	return 0;
}
