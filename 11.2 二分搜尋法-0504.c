#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, j=0;
	int score[50][2];
	srand(time(NULL));
	for(i=0;i<50;i++){
		score[i][1]=(rand()%100)+1;
		printf("\n%d",score[i][1]);
	}
	printf("\n--------------------");
	int temp;
	for(i=0;i<49;i++){
		for(j=0;j<49;j++){
			if(score[j][1]<score[j+1][1]){
				temp = score[j+1][1];
				score[j+1][1] = score[j][1];
				score[j][1] = temp;
			}
		}
	}
	for(i=0;i<49;i++){
		printf("\n%d",score[i][1]);
	}
	int rank=1;
	score[0][0]=1;
	for(i=0;i<49;i++){
		if(score[i][1]==score[i+1][1]){
			score[i+1][0]=rank;
		}
		else{
			rank=rank+1;
			score[i+1][0]=rank;
		}	
	}
	printf("\n--------------------");
	for(i=0;i<49;i++){
		printf("\n成績:%d 排名:%d",score[i][1],score[i][0]);
	}
	printf("\n--------------------");
	for(i=0;i<49;i++){
		if(score[i][0]<=5){
			printf("\n成績:%d 排名:%d",score[i][1],score[i][0]);
		}
		if(score[i][0]==25)	{
			printf("\n成績:%d 排名:%d",score[i][1],score[i][0]);
		}
	}
	printf("\n--------------------");
	int found ,search;
	printf("\n請輸入要找的分數:");
	scanf("%d", &search);
	found = binary_search(score, search, 49);
	if(found < 0){
		printf("沒找到");
	}	
	else{ 
	 	printf("有找到 在第%d個 第%d名",found+1,score[found][0]);
	} 
	return 0;
}

int binary_search(const int arr[][2], int key, int n){
	int ret = -1;
	int first=0, end=n;
	int mid=0;
	while(first<=end){
		mid = first + (end-first)/2;
		if(arr[mid][1]==key){
			ret=mid;
			return ret;
		}
		else if(arr[mid][1]>key){
			first = mid+1;
		}
		else if(arr[mid][1]<key){
			end = mid-1;
		}
	}
	return ret;
}
