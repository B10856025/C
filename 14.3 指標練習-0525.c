#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addTen(int *valueOne, int *valueTwo){
	*valueOne = *valueOne+10;
	*valueTwo = *valueTwo+10;
	int temp;
	temp = *valueOne;
	*valueOne = *valueTwo;
	*valueTwo = temp;
}
int main(int argc, char *argv[]) {
	int a = 100;
	int b = 10;
	printf("©I¥s«e:a = %d, b = %d\n", a, b);
	addTen(&a, &b);
	printf("©I¥s«á:a = %d, b = %d", a, b);
	return 0;
}

