#include <stdio.h>

int main() 
{
	// 문자는 '' 문자열은 ""
	// 문자 출력은 %c 문자열은 %s
	printf("%c\n", 'A');
	printf("%s\n", "A");  // %c를했을때 명확하지않아서 A가아니라 다른게 출력됨
	printf("%c는 %s입니다.\n", '1', "first");

	return 0;
}

