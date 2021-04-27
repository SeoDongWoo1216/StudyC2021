#include<stdio.h>
int main()
{
	float ft = 1.234567890123456789;   // 유효 숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	// 값이 처리 범위를 넘으면 그 후는 쓰레기값이 출력된다.
	printf("float형  변수의 값 : %.20f\n", ft); // 소수점 이하 20자리까지 출력
	printf("double형 변수의 값 : %.20lf\n", db);

	printf("float형  크기 : %d\n", sizeof(float));
	printf("double형 크기 : %d\n", sizeof(double));
}