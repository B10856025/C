#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//1.
	int n;
	int i, j;
	printf("��J�@���n:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=2;(j<=i) && (i%j!=0);j++);
		if(i==j) printf("%d ",i);
	} 
	
	//2.
	int c,sum;
	printf("\n\n�п�J�q�q�׼�:");
	scanf("%d",&c);
	if(c<=20) sum=c*10;
	else if(c>20 && c<=60) sum=c*12;
	else if(c>60 && c<=80) sum=c*18;
	else sum=c*22;
	printf("����q�O�@:%d\n",sum);
	
	//3.
	int num1,num2,temp;
	int gcd,lcm;
	printf("\n��J��ӼƦr:");
	scanf("%d %d",&num1,&num2);
	gcd=num1;
	lcm=num2;
	while(num2!=0)
	{
		temp=num1%num2;
		num1=num2;
		num2=temp;
	}	
	printf("gcd=%d\n",num1);
	printf("lcm=%d\n",gcd*lcm/num1);
	
	//4.
	float moneyF;
	int money,ten,five,one;
	do{
		printf("\n��J�n������B:");
		scanf("%f",&moneyF);
		money=(int)moneyF;
	}while(moneyF != money);
	ten = money/10;
	five = (money%10)/5;
	one = (money%10)%5;
	printf("%d��10�� ",ten); 
	printf("%d��5�� ",five);
	printf("%d��1�� ",one);
	return 0;
}
