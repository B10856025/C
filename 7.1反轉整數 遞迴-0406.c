#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long int_Reversion(int n)
{
	int Multiple;
	int i;
	Multiple=1;
	i=0;
	do
	{
		i++;
		Multiple=Multiple*10;
	}while(Multiple<=n);
	if(i==1)
	{
		return n;
	}
	else
	{
		return ((n%10)*(Multiple/10))+int_Reversion(n/10);
	}
}
int main()
{
	long number;
	printf("input a int= ");
	scanf("%d",&number);
	printf("%ld\n",int_Reversion(number));
	return 0;
}/*
int main(int argc, char *argv[]) {
	int number;
	printf("請輸入整數數字:");
	scanf("%d",&number);
	algorithm();
	return 0;
}
int algorithm(int n){
	int i;
	
	return n;
}*/
