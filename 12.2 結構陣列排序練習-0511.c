#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*struct date{
		int year;
		int month;
	};*/
	struct student{
		int id;
		int chinese;
		int english;
		//struct date birthday;
	};
	struct student st[50],temp;
	int i ,j;
	srand(time(NULL));
	for(i=0;i<50;i++){
		st[i].id = i+1;
		st[i].chinese = (rand()%100)+1;
		st[i].english = (rand()%100)+1;
	}
	printf("----------------�N50��ǥͪ��Ǹ��Φ��Z(�t����)�̾Ǹ��C�L�X��-------------------------\n");
	for(i=0;i<50;i++){
		printf("�Ǹ�:%d \n��妨�Z:%d �^�妨�Z:%d ����:%d", st[i].id, st[i].chinese, st[i].english, (st[i].chinese+st[i].english)/2);
		printf("\n");
	}
	printf("---------------�̾ڨ�쥭�����ƥѤj�ܤp�ƦC-------------------------\n");
	for(i=0;i<49;i++){
		for(j=0;j<49;j++){
			if((st[j].chinese+st[j].english)/2 < (st[j+1].chinese+st[j+1].english)/2){
				temp = st[j+1];
				st[j+1] = st[j];
				st[j] = temp;	
			}	
		}
	}
	for(i=0;i<50;i++){
		printf("�Ǹ�:%d \n��妨�Z:%d �^�妨�Z:%d ����:%d", st[i].id, st[i].chinese, st[i].english, (st[i].chinese+st[i].english)/2);
		printf("\n");
	}
	printf("--------------�L�X�e�Q�쪺�Ǹ��Φ��Z(�^��, ���Υ���)--------------------------\n");
	for(i=0;i<10;i++){
		printf("�Ǹ�:%d \n��妨�Z:%d �^�妨�Z:%d ����:%d", st[i].id, st[i].chinese, st[i].english, (st[i].chinese+st[i].english)/2);
		printf("\n");
	}
	/*strcpy(st[0].name,"sunny");
	st[0].chinese=100;
	st[0].math=99;
	st[0].english=98;
	st[0].birthday.year=89;
	printf("%s\n",st[0].name);
	printf("%d\n",st[0].birthday.year);
	strcpy(st[1].name,"john");
	st[1].chinese=60;
	st[1].math=59;
	st[1].english=58;
	printf("%s\n",st[1].name);
	temp = st[0];
	st[0] = st[1];
	st[1] = temp;
	printf("%d\n",st[1].chinese);
	
	*/
	return 0;
}
