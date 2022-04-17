#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//1.判斷輸入的是大寫英文字、小寫英文字 或是阿拉伯數字
	char ch;
	printf("輸入一個字元:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("大寫英文字母");
	else if(ch>='a'&&ch<='z')
		printf("小寫英文字母 ");
	else
		printf("阿拉伯數字");
	
	//2.寫一個程式判斷輸入的月份是哪個季節。
	int month;
	printf("\n輸入月份:");
	scanf("%d",&month);
	if(month<6 && month>2) 
		printf("%d月是春季",month);
	if(month<9 && month>5) 
		printf("%d月是夏季",month);
	if(month<12 && month>8) 
		printf("%d月是秋季",month);
	if(month==12||month==1||month==2) 
		printf("%d月是冬季",month);
	else printf("沒這個月份");
	return 0;
}
