#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, j=0;
	int score[10];
	srand(time(NULL));
	for(i=0;i<10;i++){
		score[i]=(rand()%100)+1;
		printf("\n%d",score[i]);
	}
	printf("\n--------------------1.排序後--------------------");
	int temp;
	for(i=0;i<9;i++){
		for(j=0;j<9;j++){
			if(score[j]<score[j+1]){
				temp = score[j+1];
				score[j+1] = score[j];
				score[j] = temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("\n%d",score[i]);
	}
	printf("\n--------------------2.~4.--------------------");
	int found = 0, search = 0;
	while(search<=100){
		printf("\n請輸入要找的數字:");
		scanf("%d", &search);
		if(search<=100){
			found = binary_search(score, search, 9);
			if(found == search){
				printf("存在陣列中");
			}	
			else{ 
			 	printf("不存在陣列中");
			} 
		}
		else{
			break;
		}
	}
	
	return 0;
}

int binary_search(const int arr[], int key, int n){
	int ret = -1;
	int first=0, end=n;
	int mid=0;
	while(first<=end){
		mid = first + (end-first)/2;
		if(arr[mid]==key){
			
			return key;
		}
		else if(arr[mid]>key){
			first = mid+1;
		}
		else if(arr[mid]<key){
			end = mid-1;
		}
	}
	return ret;
}
