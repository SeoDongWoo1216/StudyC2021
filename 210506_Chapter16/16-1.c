// 생성자를 쓰는 이유 : 생성자를 초기화하기위해

/*
Heap 영역을 사용할때 사용하는것이 동적할당함수
자동변수, 지역변수 : 스택영역의 특징을 받아서 동작
실행되는 시간 : 런타임

프로그램 실행 중에 저장공간을 할당할 수도 있다.
이렇게 사용한 저장공간은 다시 실행중에 재활용을위해 반납해야한다.
이렇게 프로그램 사용중에 저장공간을 할당하는 것을 동적할당이라고 한다.

메모리 힙영역에 동적할당받으면(malloc쓰면) 운영체제가 주소를 리턴해준다.

NULL => 포인터인데 값이없으면 아무것도 가리킬 수 없는 포인터이다.
NULL 포인터는 포인터의 특별한 상태를 나타내기위해 사용하므로 간접참조연산을 할 수 없다. => NULL인데 *붙이면 에러뜸
if(pi == NULL)  // 만약 포인터안에 아무것도없다면(안에 주소가없다면) => 주소를 할당받지 않은 상태임
*/


#include <stdio.h>
#include <stdlib.h>								// malloc, free 함수 사용을 위한 헤더 파일

int main(void) 
{
	int* pi;									// 동적 할당 영역을 연결할 포인터 선언
	double* pd;

	pi = (int*)malloc(sizeof(int));				// 메모리 동적 할당 후 포인터 연결
	if (pi == NULL) 
	{
		printf("# 메모리가 부족합니다.\n");     // 예외 상황 메세지 출력
		exit(1);
	}
	pd = (int*)malloc(sizeof(double));

	*pi = 10;								    // 포인터롤 동적 할당 영역 사용
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);	    // 동적 할당 영역에 저장된 값 출력
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);							        // 동적 할당 영역 반환
	free(pd);

	return 0;
}

/*
배열 : 물리적이고 연속적인 주소
리스트 : 논리적으로 연결된 형태로 만들어진거 (삽입과 삭제가 쉬움)
이런거 만들때 malloc을 함

스택에 하나씩만들면 자동으로 사라지기때문에 좋지않음.
선언했을때는 free를 호출하기전에 살아있음.
*/