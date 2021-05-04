/*
문자열을 비교하는 strcmp, strncmp 함수
strcmp 함수는 두 문자열의 사전 순서를 판단하여 그 결과를 반환한다. 사전 순서를 비교할때는 두 문자의 아스키코드값을 비교한다.
사전 순서는 단어가 수록되는 알파벳 순서를 말하며, 함수의 사용법과 반환 값은 다음과 같다.
★★★★★
strcmp(str1, str2);   // str1이 str2보다 사전에 나중에 나오면 1 반환
					  // str1이 str2보다 사전에 먼저 나오면 -1 반환
					  // str1이 str2가 같은 문자열이면 0 반환
★★★★★

strncmp은 비교할 문자 수를 세번째 인수로 지정할 수 있다.

문자열을 비교할때 대소문자를 통일해서 비교해주어야한다.(소문자의 아스키코드가 더 크다)
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() 
{
	char str1[80] = "pear";
	char str2[80] = "peach";




	// strcmp 함수 사용
	//printf("사전에 나중에 나오는 과일 이름 : ");
	//if (strcmp(str1, str2) > 0)					  // str1이 str2보다 크면 => 사전에 나중에 나오면 
	//{
	//	printf("%s\n", str1);
	//}
	//else					
	//{
	//	printf("%s\n", str2);  
	//}


	// strncmp 함수 사용
	printf("앞에서 3개의 문자만 비교하면?\n");
	if (strncmp(str1, str2, 3) == 0) 
	{
		printf("같다.\n");
	}

	else 
	{
		printf("다르다.\n");
	}

	return 0;
}