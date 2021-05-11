/*
공용체 : 선언방식이 구조체와 비슷하지만 모든 멤버가 하나의 저장 공간을 같이 사용한다.
임베디드는 자원 아끼려고 사용하는데 일반적으로는 잘 쓰지는 않음.
요즘 PC가 자원이 빵빵하기때문.
*/
#include<stdio.h>
union student            // 공용체 선언
{
	int num;             // 학번을 저장할 멤버
	double grade;        // 학점을 저장할 멤버
};

struct student1 
{
	int num;
	double grade;
};

int main()
{
	// union student s1 = { 315 };          // 공용체 변수의선언과 초기화(첫번째 멤버만 초기화해야함)
	union student s1 = { 3.14 };

	// printf("학번 : %d\n", s1.num);       // 학번 멤버 출력
	// s1.grade = 4.4;                      // 학점 멤버에 값 대입
	printf("학점 : %.1lf\n", s1.grade);  
	printf("학번 : %d\n", s1.num);       // 학번을 다시 출력 쓰레기값이 나오는데

	s1.num = 315;                        // 다시 num에 값을 넣어줘야 제대로 출력됨
	printf("학번 : %d\n", s1.num);
	
	
	
	// 공용체는 메모리가 할당될때 멤버중에 큰놈만 골라서 그놈만 메모리에 할당된다.
	// 나머지는 할당받은 영역을 공유해서 사용함.
	printf("\n");
	printf("%d\n", sizeof(s1));        // 8 출력
	printf("%d\n", sizeof(s1.num));    // 4 출력
	printf("%d\n", sizeof(s1.grade));  // 8 출력
	printf("\n");

	/////////////////////////////////////////////////////////////////////////////////
	// 구조체와 비교해보자.
	struct student1 s2;

	// 구조체 크기를 알아보자
	printf("%d\n", sizeof(s2));

	
	return 0;
}