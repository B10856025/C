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
 	printf("1.��X�U�ǥ;Ǹ����Z:----------\n");
 	for(i=0;i<10;i++){
 		for(j=0;j<4;j++){
 			if(j==0){
 				student[i][j] = i+1;
			 }
			else{
				int num=(rand()%100)+1;
	 			student[i][j] = num;
	 			if(j==1)
	 				printf("��%d��ǥ� �ƾǦ��Z:%d�� ",student[i][0],student[i][j]);
	 			if(j==2)
	 				printf("��妨�Z:%d�� ",student[i][j]);
	 			if(j==3)
	 				printf("�^�妨�Z:%d�� ",student[i][j]);	
			}
		 }
		 printf("\n");
	 }
	 
	printf("\n2.�ƾǡB���B�^��̰����ǥͮy���Φ��Z��X----------\n");
	
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
	
	printf("�ƾ�:��%d��:%d��\n",idMath,maxMath);
	printf("���:��%d��:%d��\n",idChines,maxChines);
	printf("�^��:��%d��:%d��\n",idEnglish,maxEnglish); 
	
	printf("\n3.�C�X�U�쥭�����ƤΧC�󥭧����ƪ��ǥͮy���Φ��Z----------\n");
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
	
	printf("\n�ƾǥ���:%d��\n",avgMath);
	printf("�C�󥭧����ƪ��ǥ�\n");
	for(i=0;i<10;i++){
		if(avgMath>student[i][1]){
			printf("��%d��ǥ�:%d��\n",student[i][0],student[i][1]);
		}
	}
	
	printf("\n��奭��:%d��\n",avgChines);
	printf("�C���奭�����ƪ��ǥ�\n");
	for(i=0;i<10;i++){
		if(avgChines>student[i][2]){
			printf("��%d��ǥ�:%d��\n",student[i][0],student[i][1]);
		}
	}
	
	printf("\n�^�奭��:%d\n��",avgEnglish);
	printf("�C��^�奭�����ƪ��ǥ�\n");
	for(i=0;i<10;i++){
		if(avgEnglish>student[i][3]){
			printf("��%d��ǥ�:%d��\n",student[i][0],student[i][1]);
		}
	}
	return 0;
}
