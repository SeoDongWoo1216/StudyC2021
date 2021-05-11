// a+ 모드로 파일의 내용을 확인하며 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	FILE* fp;
	char str[20];

	fp = fopen("a.txt", "a+");                     // 읽기 가능한 추가 모드로 개방
	if (fp == NULL)                                // 파일 개방확인
	{
		printf("파일을 만들지 못했습니다\n");
		return 1;
	}

	while (1) 
	{
		printf("과일 이름 : ");
		scanf("%s", str);                          // 키보드로 과일 이름 입력
		if (strcmp(str, "end") == 0)               // end 입력시 종료
		{
			break;
		}

		else if (strcmp(str, "list") == 0)         // list를 입력하면 파일의 내용 확인
		{
			//fseek(fp, 0, SEEK_SET);                // 버퍼의 위치 지시자를 맨 처음으로 이동(0을 2로바꾸면 2번째부터 읽음)
			fseek(fp, 0, SEEK_END);                // 파일의 끝에서부터 출력
			while (1) 
			{
				fgets(str, sizeof(str), fp);       // 과일 이름을 읽는다
				if (feof(fp))                      // 파일의 내용을 모두 읽으면 종료
				{
					break;
				}
				printf("%s", str);                 // 읽은 과일 이름을 화면에 출력
			}
		}
		else 
		{
			fprintf(fp, "%s\n", str);              // 입력한 과일 이름을 파일에 출력
		}
	}
	fclose(fp);

	return 0;
}