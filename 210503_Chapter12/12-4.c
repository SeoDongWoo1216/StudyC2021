// gets 함수를 사용한 문자열 입력
// scanf는 중간에 공백이 포함된 문자열을 한꺼번에 입력할 수 없다.
// 이럴때는 gets 함수를 사용한다.
// gets 함수는 공백이나 탭을 포함해서 문자열 한 줄을 저장할 수 있다.

#include<stdio.h>

int main() {
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;
}

/*
gets는 엔터를 누를때까지 입력한 한줄을 char배열에 저장한다.
gets함수에 scanf와 똑같이 apple jam엔터  를 입력하면 그대로 저장되는데, 끝에있는 엔터(개행)문자를 NULL문자(\0)로 바꿈
*/