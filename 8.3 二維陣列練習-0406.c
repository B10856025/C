#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A[3][3],i,j;
	int one,two,three;
	srand(time(NULL));
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			A[i][j]=(rand()%50)+1;
			printf(" %d",A[i][j]);
			if(i==0)
				one+=A[i][j];
			if(i==1)
				two+=A[i][j];
			if(i==2)
				three+=A[i][j];
		}
		printf("\n");
	}
	printf("�Ĥ@�C�M: %d,����: %d\n",one,one/3);   
	printf("�ĤG�C�M: %d,����: %d\n",two,two/3);
	printf("�ĤT�C�M: %d,����: %d\n",three,three/3);
	printf("�﨤�u�M: %d, %d\n",(A[0][0]+A[1][1]+A[2][2]),(A[0][2]+A[1][1]+A[2][0]));
	return 0;
}
