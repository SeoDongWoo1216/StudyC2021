#include<stdio.h>

int main(void) 
{
	// 지역변수 선언( {}안에서만 사용하는 변수 )
	// 변수선언은 중간에해도되지만 컴파일마다 에러뜰수도있으니까
	// 가급적이면 변수선언은 맨위에서하는것으로 참고하자.

	int a;       // int형 변수 a 선언
	int b, c;    // 2개의 int형 변수 b, c를 동시에 선언
	double da;   // double형 변수 da 선언 
	char ch;     // char형 변수 ch 선언

	a = 10;      // int형 변수 a에 정수 10 대입
	b = a;       // int형 변수 a에 정수 a의 값 대입
	c = a + 20;  // int형 변수 a에 정수 a의 값과 정수 20을 더한 값 대입
	da = 3.5;    // double형 변수 da에 실수 3.5 대입
	ch = 'A';    // char형 변수 ch에 문자 'A'대입

	printf("변수 a의  값 : %d\n",     a);
	printf("변수 b의  값 : %d\n",     b);
	printf("변수 c의  값 : %d\n",     c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n",    ch);

	printf("-----------------------------------------\n");

	// 컴파일마다 크기가 다르기때문에 sizeof 연산자로 각 자료형의 크기를 알 수 있다.
	printf("char   크기 : %d\n", sizeof(char));
	printf("short  크기 : %d\n", sizeof(short));
	printf("int    크기 : %d\n", sizeof(int));
	printf("double 크기 : %d\n", sizeof(double));
	printf("long   크기 : %d\n", sizeof(long));

	return 0;
}