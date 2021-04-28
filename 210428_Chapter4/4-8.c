#include<stdio.h>

int main() 
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); // (double)을 이용해 a, b를 실수로 형변환
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;                    // (int)를 이용해 res의 값에서 정수 부분만 추출
	printf("(int) %.1lf의 결과 : %d\n", res, a);
	printf("--------------------------------------------\n");

	// 오류
	// 좌항에있는 놈은 형변환 할 수 없다.

	double c = 10.5, d = 3.5;
	int res2;     // int로 만들어놨는데
	res2 = c + d; // 굳이 double을 연산해서 double로 형변환하려고함
	              // 이럴때는 int를초과해서 메모리 할당될수도있기때문에 오류임
	printf("%.1lf", res2);



	return 0;
}