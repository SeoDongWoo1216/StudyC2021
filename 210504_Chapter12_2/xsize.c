// 알파벳입력했을때 소문자를 입력하면 대문자를 출력

// A~Z : 65~90
// a~z : 97~122

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char input = '\0';
	int size = 'a' - 'A';
	while (1) 
	{
		printf("알파벳 하나를 입력해주세요(!입력시 종료) : ");
		scanf(" %c", &input);

		if (input <= 90 && input >= 65)					// 대문자(65~90)를 입력받으면
		{
			input += size;
			printf("소문자로 변환 : %c\n\n", input);
		}
		else if (input <= 122 && input >= 97)		    // 소문자(97~122)를 입력받으면
		{
			input -= size;
			printf("대문자로 변환 : %c\n\n", input);
		}
		else if (input == 33)						    // 느낌표(아스키코드33)을 입력받으면 
		{
			printf("종료합니다\n\n");
			break;
		}
		else
		{
			printf("\n알파벳을 입력해주세요\n\n");
		}
	}
	
	
}