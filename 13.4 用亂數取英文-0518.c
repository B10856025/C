
#include <stdio.h>  
#include<time.h>
#include <Windows.h>  

//產生長度為length的隨機字串    
int genRandomString(int length, char* ouput)
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
		case 2:
			ouput[i] = '0' + rand() % 10;
			break;
		default:
			ouput[i] = 'x';
			break;
		}
	}
	return 0;
}

int main()
{
	char line[9] = { 0 };
	memset(line, 0, 20);
	genRandomString(10, line);
	printf("line=%s\n", line);
	memset(line, 0, 20);
	Sleep(1000);
	genRandomString(8, line);
	printf("line=%s\n", line);
}
