#include <stdio.h>
#include <stdlib.h>
#include <time.h>>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sort(int arr[]){
	int i, j, temp;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(arr[j]<arr[j+1]){
			temp = arr[j+1];
			arr[j+1] = arr[j];
			arr[j] = temp;
			}
		}
	}
	return arr;
}
int length(char str[]){
	int i, count=0;
	//陣列的長度
	/*
	int len = sizeof(str)/sizeof(str[0]);
	for(i=0;i<len;i++){
		if(str[i] != '\0'){
			count+=1;
		}
		else break;
	}
	*/
	for(i=0;str[i];i++){
		count++;
	}
	return count;
}
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int arr[5];
	int i, num=0;
	for(i=0;i<5;i++){
		num = (rand()%1000)+1;
		arr[i] = num;
	}
	printf("-----產生5個隨機整數-----\n");
	for(i=0;i<5;i++){
		printf("%d\n", arr[i]);
	}
	sort(arr);
	printf("-----將陣列由大至小排序-----\n");
	for(i=0;i<5;i++){
		printf("%d\n", arr[i]);
	}
	
	printf("-----輸出字串長度-----\n");
	char str[20];
	printf("請輸入字串:");
	scanf("%s", &str);
	//printf("%d\n",length(str)); //陣列 
	//printf("%d\n", strlen(str));  //字串
	printf("字串的長度 = %d", length(str));
	return 0;
}
