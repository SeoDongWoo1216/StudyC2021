/*
컴파일러가 기본적으로 제공하는 자료형
정수 - 정수, 실수
문자 - 문자, 문자열

근데 나만의 자료형을 만들고싶다. 이것을 사용자 정의 자료형(구조체)이라고한다.

참고로, 구조체에서 발전한 형태가 클래스이다.
*/

#include <stdio.h>

struct student					// 구조체 선언(멤버로써, 변수만 가질 수 있다. (함수는 가질수없음))
{
	int num;
	double grade;
};								// ★세미콜론을 사용하는것에 주의!!!★

int main() 
{
	struct student s1;			// struct student형 변수 선언
		
	s1.num = 2;					// s1의 num에 2 저장 ( '.' : 멤버 접근 연산자)
	s1.grade = 2.7;				// s1의 grade에 2.7 저장
	printf("학번 : %d\n", s1.num);  
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}

