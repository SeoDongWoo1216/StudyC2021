// 이름 나이 주소 입력해서 출력
// 이름은 20개
// 주소는 50개
// 나이는 int

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	/*int age;
	char name[20];
	char addr[300];

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("이름을 입력하세요 : ");
	scanf("%s", name);

	printf("주소를 입력하세요 : ");
	scanf("%[^\n]s", addr);

	printf("당신의 나이는 %d살 입니다.\n", age);
	printf("당신의 이름은 %s입니다.\n", name);
	printf("당신의 주소는 %s입니다.\n", addr);*/

	int a;
	char b;

	printf("정수하나를 입력하세요 : $");
	scanf("%d", &a);
	getchar();

	printf("문자하나를 입력하세요 : $");
	scanf("%c", &b);
	// scanf("%c", &b);

	printf("입력된 값은 %d 입니다.\n", a);
	printf("입력된 문자는 %c입니다.\n", b);

	return 0;
}

