/*
�α��� ���α׷�
1. �޸��忡 id, password�� �Է��ϰ� �����̸��� password.txt�� ����
2. ����ü Login ������ id, password ����� ���� ����
3. Ű����� �ԷµǴ� id�� password�� ����ü ������ ���Ͽ�
	������ "�α��εǾ����ϴ�", �ƴϸ� "���̵� ��й�ȣ�� ã�� �� �����ϴ�." ���

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

	//printf("���̵� �Է� : ");
	//gets(temp);
	//id_m = (char*)malloc(strlen(temp) + 1);
	//if(id_m != NULL) strcpy(id_m, temp);

	//printf("�н����� �Է� : ");
	//gets(temp);
	//pw_m = (char*)malloc(strlen(temp) + 1);
	//if(pw_m != NULL)  strcpy(pw_m, temp);


	printf("���̵� �Է� : ");
	gets(temp);
	s1.id = (char*)malloc(strlen(temp) + 1);
	if (s1.id != NULL) strcpy(s1.id, temp);

	printf("�н����� �Է� : ");
	gets(temp);
	s1.password = (char*)malloc(strlen(temp) + 1);
	if (s1.password != NULL)  strcpy(s1.password, temp);
	

	/*printf("���̵� �Է� : ");
	gets(s1.id);
	printf("�н����� �Է� : ");
	gets(s1.password);*/


	/*
	printf("�Էµ� ���̵� : %s\n", s1.id);
	printf("�Էµ� �н����� : %s\n", s1.password);
	printf("\n");
	*/

	
	idfp = fopen("password.txt", "r");
	if (idfp == NULL) 
	{
		printf("������ ������ �ʾҽ��ϴ�\n");
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
		printf("���̵�, �������\n");
	}
	else if (strcmp(s1.id, id) != 0 && strcmp(s1.password, pw) != 0)
	{
		printf("���̵�, ����� �Ѵ� �ٸ�");
	}
	else if(strcmp(s1.password, pw))
	{
		printf("����� �ٸ�\n");
	}
	else 
	{
		printf("���̵� �ٸ�");
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
		printf("���̵�, �������\n");
	}
	else 
	{
		printf("���̵� ����� �ٸ�\n");
	}*/
	


	fclose(idfp);
	

	return 0;
}