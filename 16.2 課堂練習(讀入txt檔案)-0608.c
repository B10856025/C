#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fptr;
	char ch;
	int count=0;
	fptr = fopen("16.2-1 welcome.txt", "r");
	if(fptr!=NULL){
		while((ch = getc(fptr))!=EOF){
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else{
		printf("檔案開啟失敗!!\n");
	}
	return 0;
}
