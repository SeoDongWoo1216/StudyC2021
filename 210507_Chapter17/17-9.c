/*
구조체 변수를 포인터로 연결한 것을 연결리스트라고한다.
첫번째 변수의 위치만 알면 나머지 변수는 포인터를 따라가 모두 사용할 수 있으므로
대부분 첫 번째 변수의 위치를 head 포인터에 저장해 사용한다.
*/

// 자기 참조 구조체
#include <stdio.h>

struct list 
{
	int num;
	struct list* next;			// 구조체 자신을 가리키는 포인터 멤버
};

int main() 
{
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 };  // 구조체 변수 초기화
	struct list* head = &a, * current;						  // 헤드 포인터 초기화

	a.next = &b;				// a의 포인터 멤버가 b를 가리킴
	b.next = &c;				// b의 포인터 멤버가 c를 가리킴

	printf("head->num : %d\n", head->num);					  // head가 가리키는 a의 num 멤버 사용
	printf("head->next->num : %d\n", head->next->num);		  // head로 b의 num멤버 사용

	printf("list all : ");		 
	current = head;				// 최초 current 포인터가 a를 가리킴

	while (current != NULL) 	// 마지막 구조체 변수까지 출력하면 반복종료
	{
		printf("%d  ", current->num);	// current가 가리키는 구조체 변수의 num 출력
		current = current->next;		// current가 다음 구조체 변수를 가리키도록함
	}
	printf("\n");

	return 0;
}