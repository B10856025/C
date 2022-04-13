#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int student[10][4];
	int maxMath=0,maxChines=0,maxEnglish=0;
	int idMath=0,idChines=0,idEnglish=0;
	int avgMath,avgChines,avgEnglish;
	int sum1=0,sum2=0,sum3=0;
	int lower=0;
 	srand(time(NULL));
 	int id;
 	int i = 0 , j = 0;
 	printf("1.輸出各學生學號成績:----------\n");
 	for(i=0;i<10;i++){
 		for(j=0;j<4;j++){
 			if(j==0){
 				student[i][j] = i+1;
			 }
			else{
				int num=(rand()%100)+1;
	 			student[i][j] = num;
	 			if(j==1)
	 				printf("第%d位學生 數學成績:%d分 ",student[i][0],student[i][j]);
	 			if(j==2)
	 				printf("國文成績:%d分 ",student[i][j]);
	 			if(j==3)
	 				printf("英文成績:%d分 ",student[i][j]);	
			}
		 }
		 printf("\n");
	 }
	 
	printf("\n2.數學、國文、英文最高的學生座號及成績輸出----------\n");
	
	for(i=0;i<10;i++){
		if(maxMath<student[i][1]){
			maxMath=student[i][1];
			idMath = student[i][0];
		}		
	}
	
	for(i=0;i<10;i++){
		if(maxChines<student[i][2]){
			maxChines=student[i][2];
			idChines = student[i][0];
		}
	}
	 
	for(i=0;i<10;i++){
		if(maxEnglish<student[i][3]){
			maxEnglish=student[i][3];
			idEnglish = student[i][0];
		}
	}
	
	printf("數學:第%d位:%d分\n",idMath,maxMath);
	printf("國文:第%d位:%d分\n",idChines,maxChines);
	printf("英文:第%d位:%d分\n",idEnglish,maxEnglish); 
	
	printf("\n3.列出各科平均分數及低於平均分數的學生座號及成績----------\n");
	for(i=0;i<10;i++){
		sum1=sum1+student[i][1];
		avgMath=sum1/10;
	}
	for(i=0;i<10;i++){
		sum2=sum2+student[i][2];
		avgChines=sum2/10;
	}
	for(i=0;i<10;i++){
		sum3=sum3+student[i][3];
		avgEnglish=sum3/10;
	}
	
	printf("\n數學平均:%d分\n",avgMath);
	printf("低於平均分數的學生\n");
	for(i=0;i<10;i++){
		if(avgMath>student[i][1]){
			printf("第%d位學生:%d分\n",student[i][0],student[i][1]);
		}
	}
	
	printf("\n國文平均:%d分\n",avgChines);
	printf("低於國文平均分數的學生\n");
	for(i=0;i<10;i++){
		if(avgChines>student[i][2]){
			printf("第%d位學生:%d分\n",student[i][0],student[i][1]);
		}
	}
	
	printf("\n英文平均:%d\n分",avgEnglish);
	printf("低於英文平均分數的學生\n");
	for(i=0;i<10;i++){
		if(avgEnglish>student[i][3]){
			printf("第%d位學生:%d分\n",student[i][0],student[i][1]);
		}
	}
	return 0;
}
