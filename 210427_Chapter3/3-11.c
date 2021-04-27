// 배열 이름 자체가 주소를 나타내기때문에
// 배열에 scanf를 넣을때 &를 넣어주지 않아도됨.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char grade;           // 학점을 입력할 변수
	char name[20];        // 이름을 입력할 배열

	printf("학점 입력 : "); 
	scanf("%c", &grade);  // grade 변수에 학점 문자 입력(A, B, C, D같은거)

	printf("이름 입력 : ");
	scanf("%s", name);   // name 배열에 이름 문자열 입력(&사용안해도됨)

	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}

