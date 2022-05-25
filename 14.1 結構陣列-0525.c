#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct data {
		int id;
		int chinese;
		int math;
		int english;
		int ave;
	};
	struct data student[50];
	srand(time(NULL));
	int i, j;
	for(i=0;i<50;i++){
		student[i].id = i+1;
		student[i].chinese = (rand()%100)+1;
		student[i].math = (rand()%100)+1;
		student[i].english = (rand()%100)+1;
	}
	for(i=0;i<50;i++){
		student[i].ave = (student[i].chinese+student[i].math+student[i].english)/3;
	}
	
	for(i=0;i<50;i++){
		printf("學號：%d 平均成績: %d ",student[i].id, student[i].ave) ;
		printf("\n");
	}

	int sort[50], temp;
	for(i=0;i<50;i++){
		sort[i] = i;
	}
	printf("%d\n",student[0].ave);
	for(i=0;i<49;i++){
		for(j=0;j<49;j++){
			if(student[sort[j]].ave<student[sort[j+1]].ave) {
				temp = sort[j+1];
				sort[j+1] = sort[j];
				sort[j] = temp;
			}
		}
	}
	for(i=0;i<50;i++){
		printf("排名:%d 學號：%d 平均成績: %d ", i+1, student[sort[i]].id, student[sort[i]].ave);
		printf("\n");
	}
	return 0;
}
