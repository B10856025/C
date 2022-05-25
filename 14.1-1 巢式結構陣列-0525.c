#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct score{
		int chinese;
		int math;
		int english;
		int ave;
	};
	struct data {
		int id;
		struct score sc;
	};
	
	struct data student[50];
	srand(time(NULL));
	int i, j;
	for(i=0;i<50;i++){
		student[i].id = i+1;
		student[i].sc.chinese = (rand()%100)+1;
		student[i].sc.math = (rand()%100)+1;
		student[i].sc.english = (rand()%100)+1;
	}
	for(i=0;i<50;i++){
		student[i].sc.ave = (student[i].sc.chinese+student[i].sc.math+student[i].sc.english)/3;
	}
	
	for(i=0;i<50;i++){
		printf("學號：%d 平均成績: %d ",student[i].id, student[i].sc.ave) ;
		printf("\n");
	}

	int sort[50], temp;
	for(i=0;i<50;i++){
		sort[i] = i;
	}
	for(i=0;i<49;i++){
		for(j=0;j<49;j++){
			if(student[sort[j]].sc.ave<student[sort[j+1]].sc.ave) {
				temp = sort[j+1];
				sort[j+1] = sort[j];
				sort[j] = temp;
			}
		}
	}
	for(i=0;i<50;i++){
		printf("排名:%d 學號：%d 平均成績: %d ", i+1, student[sort[i]].id, student[sort[i]].sc.ave);
		printf("\n");
	}
	return 0;
}
