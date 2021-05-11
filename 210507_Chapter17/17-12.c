/*
typedef를 사용한 형 재정의
typedef를 사용하면 자료형 이름에서 struct같은 예약어를 생략할 수 있다.
형 재정의를 통해 자료형을 짧고 쉬운 이름으로 사용하는 방법을 알아보자.

구조체뿐만아니라 기본 자료형(정수, 문자)도 재정의해서 사용할 수 있다.


구조체 변수의 주소를 포인터에 저장하면 ->를 통해 접근
구조체 변수에 접근하려면 .를 통해 접근
구조체도 자료형이 같으면 배열을 선언할 수 있다.
자기 참조 구조체는 연결리스트를 만들때 사용한다.
공용체 변수 크기는 멤버의 수에 비례하지않는다(제일 큰놈, 한놈만 때려잡아서 큰놈의 크기만 할당한다)
열거형 멤버는 열거형 변수에 저장될 값들을 나열한다.
*/

#include <stdio.h>

typedef struct student   // 내가 student를 Student로 사용하겠다고 재정의.
{
	int num;
	double grade;
}STUDENT;

// typedef struct student student;    // 이것도 똑같은 재정의인데 굳이 한줄을 더 쓸 필요는 없음
void print_data(STUDENT* ps);

int main() 
{
	STUDENT s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}

void print_data(STUDENT* ps)
{
	printf("학번 : %d\n",    ps->num);    // Student 포인터로 멤버 접근
	printf("학점 : %.1lf\n", ps->grade);
}