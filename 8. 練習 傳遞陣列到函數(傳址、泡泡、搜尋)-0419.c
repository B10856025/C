#include <stdio.h>
#include <stdlib.h>
#define MAX 5 
#define ROW 4
#define COL 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	///------------------1.--------------
	int A[MAX]={2,1,6,7,0};
	printf("-------------\n");
	show(A);
	bubble(A);
	printf("\n-------------\n");
	show(A);
	///------------------2.--------------
	printf("\n");
	int a[ROW][COL] = {{10,56,40},
						{88,0,52},
						{14,13,78},
						{60,2,34}};
	int b[2];
	printf("-------------\n");
	show_1(a);
	search(a,b);
	printf("�}�C���̤j��=%d\n",b[0]);
	printf("�}�C���̤p��=%d",b[1]);
	return 0;  
}
//�I�s ��� 
void show(int Arr[]){
	int i;
	for(i=0;i<MAX;i++)
		printf(" %d ",Arr[i]);
	return ;
}
//�I�s �}�C+2 �Ǧ^��} (���O�ǭ�) 
void add(int Arr[]){
	int i;
	for(i=0;i<MAX;i++)
		Arr[i]+=2;
	return ;
}
//�I�s �w�w 
void bubble(int Arr[]){
	int temp,i,j;
	for(i=0;i<MAX-1;i++)
		for(j=0;j<MAX-1;j++)
			if(Arr[j]>Arr[j+1]){
				temp=Arr[j];
				Arr[j]=Arr[j+1];
				Arr[j+1]=temp;
			}
	return ;
}
//�I�s ���
void show_1(int arr[][COL]){
	int i,j;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return ;
}
//�I�s �j�M�̤j�ȳ̤p�� 
void search(int arr[][COL],int brr[]){
	brr[0]=brr[1]=arr[0][0];
	int i,j;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			if(brr[0]<arr[i][j])
				brr[0]=arr[i][j];
			if(brr[1]>arr[i][j])
				brr[1]=arr[i][j];
		}
	}
	return ;
}
