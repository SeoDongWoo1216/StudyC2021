/*
	'*' 가 사용될때는 선언부는 단순한 기호, 실행문에있는게 참조연산자
	pa가 주소를 저장한 포인터이기때문에 scanf를쓸때는 &를 안붙여줘도된다.
	int형 포인터에는 int변수, double형 포인터에는 double변수만 붙는다.
	포인터 변수 자체의 크기는 항상 실질적으로 4바이트이다.(int형, double 다 똑같음)
	=> 주소의 값이 변하지않기때문 
*/
#include<stdio.h>

int main() 
{
	int a = 10;
	int b = 15;
	int total;
	double avg;

	int *pa, *pb;       // int형 포인터 선언
	int *pt = &total;   // pt를 total의 int형 시작주소로 초기화
	double* pg = &avg;  // pg를 avg라는 double형 변수의 시작주소로 초기화


	// 포인터변수에는 주소를 저장
	pa = &a;  
	pb = &b;


	// 데이터를 넣을때 '*'를 사용함.
	*pt = *pa + *pb;   // pa, pb가 가리키고있는 두 값(a, b)을 더한다
	*pg = *pt / 2.0;


	printf("두 정수의 값   : %d, %d\n", *pa, *pb);   // a, b값 출력
	printf("두 정수의 합   : %d\n", *pt);            // total값 출력
	printf("두 정수의 평균 : %.2lf\n\n", *pg);       // avg값 출력

	printf("두 정수의 값   : %d, %d\n", a, b);
	printf("두 정수의 합   : %d\n", total);
	printf("두 정수의 평균 : %.2lf\n", avg);

	return 0;
}