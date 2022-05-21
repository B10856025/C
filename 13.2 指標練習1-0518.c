#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void add(int *x){
	*x = *x+1000;
	printf("x is %d",*x);
}
int main(int argc, char *argv[]) {
	int *tpp, *ptt;
	int num = 20;
	int b = 30;
	tpp = &num;
	printf("tpp指向num的位址:%d tpp的位址:%d num的位址:%d tpp指向num的位址的值:%d\n",tpp, &tpp, &num, *tpp);
	ptt = &b;
	printf("b的值:%d 指向b的位址:%d\n", *ptt, ptt);
	*tpp = 100;
	printf("*tpp=num的值:%d num的值:%d num的位址:%d\n", *tpp, num, tpp);
	float c = 1.5f;
	float *ptr;
	ptr = &c;
	printf("*ptr的值=c=%f\n", *ptr);
	/******************/
	add(&b);   //傳遞位址的呼叫 & * 可以改變原本的值!    //傳址VS傳值 
	printf("\nb is %d",b);
	/******************/
	struct p{
		int q;
		float r;
	}no1;
	struct p *ttr;
	ttr = &no1;                           //指標指向陣列 
	no1.q=10;
	no1.r=9.9;
	printf("\n%d %f", no1.q, no1.r);
	ttr->q = 11;                          //-> 
	printf("\n%d %f", no1.q, no1.r);
	return 0;
}
