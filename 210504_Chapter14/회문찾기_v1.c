/*
회문을 찾는 프로그램 ex)madam

1. 단어를 입력받음
2. 단어 길이 / 2를 해서 기준점을 잡음 (10개면 for문 5번)
3. 기준점을 잡아서 단어의 맨처음, 맨끝의 단어를 비교(그 다음은 2번째, 맨끝-1 ...)
4. 전부다 비교해서 같으면 회문이다. 출력
5. 하나라도 다르면 회문이 아닙니다. 출력

*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int what_the_palindrome(char*, int);

int main()
{
	char input[200] = "";   // 배열은 선언할때 방 개수를 선언해주어야함.
	int size;

	
	
	while (1) 
	{
		printf("단어를 입력(!입력시 종료) : ");
		scanf("%s", input);

		size = strlen(input);

		if (input[0] == 33) 
		{
			printf("종료합니다");
			exit(1);
		}

		int num = what_the_palindrome(input, size);

		if (num == 1) 
		{
			printf("회문입니다.\n");
		}
		else
		{
			printf("회문이아닙니다\n");
		}

	}
}

int what_the_palindrome(char*input, int size) 
{
	for (int i = 0; i < size / 2; i++)
	{
		if (input[i] != input[size - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}