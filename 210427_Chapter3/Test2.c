#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
첫번째 정수를 입력하고 엔터를 입력하는데,
이때 a+엔터가 남아있기때문에 b에는 엔터를 입력받아서 호출되서 결과가 이상하게뜬다.
따라서 공백을 하나 남겨서 scanf를 연속으로 쓰는것이 바람직함

또는
getchar()를 사용하면됨
*/

int main()
{
	int a;
	char b;

	printf("정수하나를 입력하세요 : $");
	scanf("%d", &a);
	
	getchar();  
	printf("문자하나를 입력하세요 : $");
	scanf("%c", &b);
	// scanf(" %c", &b);  // 버퍼를위해 공백을 한칸 띄우고 scanf 실행하는게 좋음

	printf("입력된 값은 %d 입니다.\n", a);
	printf("입력된 문자는 %c입니다.\n", b);

	return 0;
}

