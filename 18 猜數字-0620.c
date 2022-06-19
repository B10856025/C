#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int  guess, i, j, A=0, B=0;
	int g[4];
	int ans[4];
	char ch = 'q';
	char guess_ch;
	srand(time(NULL));
	printf("猜數字遊戲(0~9) -輸入q結束遊戲-\n");
	for(i=0;i<4;i++){
		do{
			ans[i] = rand()%10;      //ans 取亂數存陣列 ; %9 : 0~8; %9+1 : 1~9
			for(j=0;j<i;j++){
				if(ans[i] == ans[j]){ //判斷是否有重複的值 是就跳出迴圈 
					//printf("\n%d %d\n", ans[i], ans[j]);
					break;
				}
			}
		}while(i != j);            //i=j才離開 
	}         
	/*for(i=0;i<4;i++){          
		printf("%d", ans[i]);     //印出答案
	} */ 
	while(A != 4){                    //當A不等於4 繼續猜 
		printf("請輸入四個數字:\n"); 
		scanf("%d", &guess);          //整數 
		scanf("%c", &guess_ch);       //轉字元 
		if(guess_ch == ch)  break;    //如果輸入Q跳出迴圈
		g[0] = guess/1000;            //將猜的數字依序存到陣列 
		g[1] = guess/100%10;
		g[2] = guess/10%10;
		g[3] = guess%10;
		A=0, B=0;		
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if((g[i] == ans[j]) && (i == j)){  //判斷i=j且位置相同 
					A = A+1;
				}		
				if((g[i] == ans[j]) && (i != j)){  //判斷i=j但位置不相同
					B = B+1; 
				}		
			}
		}
		printf("%dA%dB\n", A, B);	
	}       
	
	if(A != 4){
		printf("結束遊戲~\n正確答案 %d%d%d%d", ans[0], ans[1], ans[2], ans[3]);
	}
	else{
		printf("\n恭喜答對!");
	}
	return 0;
}
