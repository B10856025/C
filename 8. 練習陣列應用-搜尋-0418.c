#include <stdio.h>
#include <stdlib.h>
#define MAX 10 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[MAX];
	int i=0,num;
	int sum=0;
	int found,flag=0;
	
	do{
		printf("輸入成績:");
		scanf("%d",&score[i]);
		
	}while(score[i++]>0);
	num=i-1;
	for(i=0;i<num;i++)
		sum+=score[i];
	printf("總分:%d\n",sum);
	printf("平均成績:%.2f\n",(float)sum/num);
	
	printf("輸入欲搜尋的成績:");
	scanf("%d",&found);
	for(i=0;i<num;i++){ 
		if(score[i]==found){ 
			printf("找到score[%d]=%d",i,score[i]);
			flag=1;	
		} 
	} 
	if(flag==0)
		printf("沒有找到");
	return 0;  
}
