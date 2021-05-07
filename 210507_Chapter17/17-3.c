// 다른 구조체를 멤버로 갖는 구조체 사용

#include <stdio.h>

struct profile				// 신상명세 구조체 선언
{
	int age;				// 나이
	double height;			// 키
};

struct student 
{
	struct profile pf;		// profile 구조체를 멤버로사용
							// profile 구조체를 찾기때문에 profile 구조체를 먼저 선언해야함.
	int id;					// 학번을 저장할 멤버
	double grade;			// 학점을 저장할 멤버
};

int main() 
{
	struct student a;						// student 구조체 변수 선언

	a.pf.age = 17;							// pf 멤버의 age 멤버에 나이 저장
	a.pf.height = 164.5;					// pf 멤버의 height 멤버에 키 저장
	a.id = 315;
	a.grade = 4.3;

	printf("나이 : %d\n", a.pf.age);		// pf 멤버의 age멤버 출력
	printf("키 : %.1lf\n", a.pf.height);	// pf 멤버의 height 멤버 출력
	printf("학번 : %d\n", a.id);			// id 멤버 출력
	printf("학점 : %.1lf\n", a.grade);		// grade 멤버 출력

	return 0;
}