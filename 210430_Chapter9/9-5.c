// 32비트 기준으로 공부하고있는것임.
// x64로 바꾸면 메모리처리가 더 커지기때문에 주소의 크기가 8바이트로 늘어남.

#include<stdio.h>

int main() {
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double *pd = &db;

	// 주소 크기는 항상 4바이트
	printf("char형   변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형    변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n\n", sizeof(&db));

	// 포인터의 크기는 항상 4바이트
	printf("char *   포인터의 크기 : %d\n", sizeof(pc));
	printf("int *    포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n\n", sizeof(pd));

	// 변수의 크기는 변수의 타입에따라 다르게 출력
	printf("char *   포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int *    포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n\n", sizeof(*pd));

	return 0;
}