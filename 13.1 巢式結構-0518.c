#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//產生長度為length的隨機字串    
/*int genRandomString(int length, char* ouput)
{
	int flag, i;
	srand((unsigned)time(NULL));
	for (i = 0; i < length - 1; i++)
	{
		flag = rand() % 3;
		switch (flag)
		{
		case 0:
			ouput[i] = 'A' + rand() % 26;
			break;
		case 1:
			ouput[i] = 'a' + rand() % 26;
			break;
		/*case 2:
			ouput[i] = '0' + rand() % 10;
			break;
		default:
			ouput[i] = 'x';
			break;
		}
	}
	return 0;
}*/
int main(int argc, char *argv[]) {
	struct score{
		int chinese;
		int english;
		int math;
	};
	struct data{
		int id;
		char name[8];
		struct score number;
	};
	struct data student[50], temp;
	srand(time(NULL));
	//srand((unsigned)time(NULL));
	int i, average[50], j;
	for(i=0;i<50;i++){
		student[i].id = i+1;
		student[i].number.chinese = (rand()%100)+1;
		student[i].number.english = (rand()%100)+1;
		student[i].number.math = (rand()%100)+1;
		for(j=0;j<8;j++){
			student[i].name[j] = (rand()%(90-65+1))+65;
		}
		//memset(student[i].name, 0, 20);
		//genRandomString(9, student[i].name);
	}

	printf("---------------50位學生的姓名、學號及平均成績依學號列印出來--------------------\n"); 
	for(i=0;i<50;i++){
		average[i] = (student[i].number.chinese+student[i].number.english+student[i].number.math)/3;
		printf("姓名:%s 學號:%d 平均成績:%d", student[i].name,student[i].id, average[i]);
		printf("\n");
	}
	printf("----------------依據平均分數由大至小排序後的結果-------------------\n");
	for(i=0;i<49;i++){
		for(j=0;j<49;j++){
			average[j] = (student[j].number.chinese+student[j].number.english+student[j].number.math)/3;
			average[j+1] = (student[j+1].number.chinese+student[j+1].number.english+student[j+1].number.math)/3;
			if(average[j]<average[j+1]){
				temp = student[j+1];
				student[j+1] = student[j];
				student[j] = temp;
			}
		}
	}
	for(i=0;i<50;i++){
		average[i] = (student[i].number.chinese+student[i].number.english+student[i].number.math)/3;
		printf("姓名:%s 學號:%d 平均成績:%d", student[i].name, student[i].id, average[i]);
		printf("\n");
	}
	return 0;
}
