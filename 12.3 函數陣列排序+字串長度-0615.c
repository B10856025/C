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
	//�}�C������
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
	printf("-----����5���H�����-----\n");
	for(i=0;i<5;i++){
		printf("%d\n", arr[i]);
	}
	sort(arr);
	printf("-----�N�}�C�Ѥj�ܤp�Ƨ�-----\n");
	for(i=0;i<5;i++){
		printf("%d\n", arr[i]);
	}
	
	printf("-----��X�r�����-----\n");
	char str[20];
	printf("�п�J�r��:");
	scanf("%s", &str);
	//printf("%d\n",length(str)); //�}�C 
	//printf("%d\n", strlen(str));  //�r��
	printf("�r�ꪺ���� = %d", length(str));
	return 0;
}
