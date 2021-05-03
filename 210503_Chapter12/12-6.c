#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	fgetc(stdin);
	printf("이름 입력 : ");
	gets(name);
	printf("\n나이 : %d\n이름 : %s\n", age, name);

	return 0;
}
/*
버퍼에서 개행 문자를 가져와 입력을 끝내므로 키보드로 이름을 입력하는 과정이 생략되면서 name 배열의 첫번째 요소에는 null문자가 저장되어서 출력이안된다.
이 문제는 입력 함수들이 버퍼를 공유해서 생기는 것이므로 필요할때 버퍼의 내용을 지워야한다.

이럴때 사용하는 개행 문자를 읽어들이는 문자 입력 함수를 호출하면 된다.
scanf("%*c");, getchar(), fgetc(stdin);

scanf() , getchar(), gets
printf(), putchar(), puts()
*/

