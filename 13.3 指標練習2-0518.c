#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addTen(int *x,int *y){
	int temp;
	*x = *x+10;
	*y = *y+10;
	temp = *x;
	*x = *y;
	*y = temp;
	printf("\n©I¥s«á a=%d b=%d", *x, *y);
}
int main(int argc, char *argv[]) {
	int a = 100;
	int b = 10;
	printf("©I¥s«e a=%d b=%d", a, b);
	addTen(&a, &b);
	return 0;
}
