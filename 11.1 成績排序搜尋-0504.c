#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0, j=0;
	int score[50][2];
	srand(time(NULL));
	for(i=0;i<50;i++){
		score[i][1]=(rand()%100)+1;
		printf("\n%d",score[i][1]);
	}
	printf("\n--------------------");
	int temp;
	for(i=0;i<49;i++){
		for(j=0;j<49;j++){
			if(score[j][1]<score[j+1][1]){
				temp = score[j+1][1];
				score[j+1][1] = score[j][1];
				score[j][1] = temp;
			}
		}
	}
	for(i=0;i<49;i++){
		printf("\n%d",score[i][1]);
	}
	int rank=1;
	score[0][0]=rank; 
	for(i=0;i<49;i++){
		if(score[i][1]==score[i+1][1]){
			score[i+1][0]=rank;
		}
		else{
			rank=rank+1;
			score[i+1][0]=rank;
		}
	}
	printf("\n--------------------");
	for(i=0;i<49;i++){
		printf("\n���Z:%d �ƦW:%d",score[i][1],score[i][0]);
	}
	printf("\n---------�Ĥ@�W�ܲĤ��W���Z-----------");
	for(i=0;i<5;i++){
		printf("\n���Z:%d �ƦW:%d",score[i][1],score[i][0]);
	}
	printf("\n---------��25�W���Z-----------");
	printf("\n���Z:%d �ƦW:%d",score[24][1],score[24][0]);

	return 0;
}
