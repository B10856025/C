#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int time;
void hnata(int n, char A, char B, char C){
	if(n==1){
		printf("�N %d �h�q %c ���� %c \n", n, A, C);
		time++; 
	}
	else{
		hnata(n-1, A, C, B);
		printf("�N %d �h�q %c ���� %c \n", n, A, C);
		time++; 
		hnata(n-1, B, A, C);
	}
}
int main(int argc, char *argv[]) {
	int n;
	printf("�п�J�e���𪺰���:\n");
	scanf("%d",&n);
	hnata(n, 'A', 'B', 'C');
	printf("����%d��",time);
	return 0;
}
