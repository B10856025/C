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
	printf("tpp���Vnum����}:%d tpp����}:%d num����}:%d tpp���Vnum����}����:%d\n",tpp, &tpp, &num, *tpp);
	ptt = &b;
	printf("b����:%d ���Vb����}:%d\n", *ptt, ptt);
	*tpp = 100;
	printf("*tpp=num����:%d num����:%d num����}:%d\n", *tpp, num, tpp);
	float c = 1.5f;
	float *ptr;
	ptr = &c;
	printf("*ptr����=c=%f\n", *ptr);
	/******************/
	add(&b);   //�ǻ���}���I�s & * �i�H���ܭ쥻����!    //�ǧ}VS�ǭ� 
	printf("\nb is %d",b);
	/******************/
	struct p{
		int q;
		float r;
	}no1;
	struct p *ttr;
	ttr = &no1;                           //���Ы��V�}�C 
	no1.q=10;
	no1.r=9.9;
	printf("\n%d %f", no1.q, no1.r);
	ttr->q = 11;                          //-> 
	printf("\n%d %f", no1.q, no1.r);
	return 0;
}
