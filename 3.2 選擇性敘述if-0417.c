#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//1.輸入x, y座標值，判斷該點位於哪一個象限或是在座標軸上
	int x, y;
	printf("輸入x, y座標值:");
	scanf("%d %d",&x,&y);
	if(x<0&&y<0)
		printf("在第三象限");
	if(x>0||y>0)
		if(x>0&&y>0)
			printf("在第一象限");
		if(x>0&&y<0)
			printf("在第四象限");
		if(x<0&&y>0)
			printf("在第二象限");
	if(x==0||y==0)
		if(x==0&&y==0)
			printf("在原點");
		if(x==0&&y!=0)
			printf("在y軸上");
		if(x!=0&&y==0)
			printf("在x軸上");
	
	//2.計算和顯示所需運費+物流處理費
	int spend = 199;
	int kg=0, sum=0;
	printf("\n\n輸入購物重量:");
	scanf("%d",&kg);
	if(kg<5){
		sum = kg*50;
		printf("所需運費%d+物流處理費%d=%d",spend,sum,spend+sum);
	}
	else{
		sum = (kg-5)*30 + 5*50;
		printf("所需運費%d+物流處理費%d=%d",spend,sum,spend+sum);
	}
	return 0;
}
