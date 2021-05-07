/* 구조체 배열을 처리하는 함수
 구조체 배열의 이름은 첫번째 요소의 주소이므로 구조체 변수를 가리킨다.
 따라서 구조체 배열의 이름을 인수로 받는 함수는 구조체 포인터를 매개변수로 선언해야한다.
*/

// 함수에서 -> 연산자를 사용하여 구조체 배열의 값 출력 (17-7에서 사용했떤 구조체배열을 함수 => 구조체 포인터로 바꿔보자)
// 구조체 배열을 초기화하고 출력해보자.
#include <stdio.h>

struct address     // 주소록을 만들 구조체 선언
{
	char name[20];  // 이름을 저장할 멤버
	int age;		// 나이를 저장할 멤버
	char tel[20];	// 전화번호를 저장할 멤버
	char addr[80];	// 주소를 저장할 멤버
};

void print_list(struct address* lp);

int main()
{
	struct address list[5] = {						// 요소가 5개인 구조체 배열 선언
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건청동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};
	int i;

	print_list(list);   // 함수호출(구조체 배열 list를 입력으로 준다)
						// 배열명 list는 첫 번째 요소의 주소로 struct address 구조체 변수를 가리킨다.

	return 0;
}

void print_list(struct address* lp)					// 매개변수는 구조체 포인터
{
	int i;

	for (i = 0; i < 5; i++)							// 배열 요소 수 만큼 반복
	{
		// printf("%10s%5d%15s%20s\n",					// 각 배열 요소의 멤버 출력
		//	(lp+i)->name,(lp+i)->age, (lp+i)->tel, (lp+i)->addr);

		// 위의 코드와 똑같은 표현.
		printf("%10s%5d%15s%20s\n",					// 각 배열 요소의 멤버 출력
			lp[i].name, lp[i].age, lp[i].tel, lp[i].addr);
	}
}

/* 
(lp+i)->name  = (*(lp+i)).name  =  lp[i].name  세 코드는 같은 코드임.
*/

