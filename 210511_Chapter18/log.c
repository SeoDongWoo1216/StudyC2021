/*
로그인 프로그램
1. 메모장에 id, password를 입력하고 파일이름은 password.txt로 저장
2. 구조체 Login 변수에 id, password 멤버가 각각 저장
3. 키보드로 입력되는 id와 password를 구조체 변수와 비교하여
	맞으면 "로그인되었습니다", 아니면 "아이디나 비밀번호를 찾을 수 없습니다." 출력

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Login
{
	/*char id[20];
	char password[20];*/

	char* id;
	char* password;
};

int main()
{
	struct Login s1;

	char* str[2];

	char id[100];
	char pw[100];
	char* id_m = "";
	char* pw_m = "";

	char temp[100];	

	int res;
	int count = 0;

	FILE* idfp;

	//printf("아이디 입력 : ");
	//gets(temp);
	//id_m = (char*)malloc(strlen(temp) + 1);
	//if(id_m != NULL) strcpy(id_m, temp);

	//printf("패스워드 입력 : ");
	//gets(temp);
	//pw_m = (char*)malloc(strlen(temp) + 1);
	//if(pw_m != NULL)  strcpy(pw_m, temp);


	printf("아이디 입력 : ");
	gets(temp);
	s1.id = (char*)malloc(strlen(temp) + 1);
	if (s1.id != NULL) strcpy(s1.id, temp);

	printf("패스워드 입력 : ");
	gets(temp);
	s1.password = (char*)malloc(strlen(temp) + 1);
	if (s1.password != NULL)  strcpy(s1.password, temp);
	

	/*printf("아이디 입력 : ");
	gets(s1.id);
	printf("패스워드 입력 : ");
	gets(s1.password);*/


	/*
	printf("입력된 아이디 : %s\n", s1.id);
	printf("입력된 패스워드 : %s\n", s1.password);
	printf("\n");
	*/

	
	idfp = fopen("password.txt", "r");
	if (idfp == NULL) 
	{
		printf("파일이 열리지 않았습니다\n");
		return 1;
	}
	

	while (1)
	{
		res = fscanf(idfp, "%s%s", id, pw);
		if (res == EOF)
		{
			break;
		}
	}

	if (strcmp(s1.id, id) == 0 && strcmp(s1.password, pw) == 0)
	{
		printf("아이디, 비번같음\n");
	}
	else if (strcmp(s1.id, id) != 0 && strcmp(s1.password, pw) != 0)
	{
		printf("아이디, 비번이 둘다 다름");
	}
	else if(strcmp(s1.password, pw))
	{
		printf("비번이 다름\n");
	}
	else 
	{
		printf("아이디가 다름");
	}


	/*while(1)
	{
		res = fscanf(idfp, "%s%s", s1.id, s1.password);
		if (res == EOF) 
		{
			break;
		}
	}

	if (strcmp(s1.id, id_m) == 0 && strcmp(s1.password, pw_m) == 0)
	{
		printf("아이디, 비번같음\n");
	}
	else 
	{
		printf("아이디나 비번이 다름\n");
	}*/
	


	fclose(idfp);
	

	return 0;
}