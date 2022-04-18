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
	printf("皚い程=%d\n",b[0]);
	printf("皚い程=%d",b[1]);
	return 0;  
}
//㊣ 陪ボ 
void show(int Arr[]){
	int i;
	for(i=0;i<MAX;i++)
		printf(" %d ",Arr[i]);
	return ;
}
//㊣ 皚+2 肚 (ぃ琌肚) 
void add(int Arr[]){
	int i;
	for(i=0;i<MAX;i++)
		Arr[i]+=2;
	return ;
}
//㊣ 獁獁 
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
//㊣ 陪ボ
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
//㊣ 穓碝程程 
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
