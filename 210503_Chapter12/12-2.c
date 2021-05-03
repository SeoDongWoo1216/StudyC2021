// 문자열은 주소이므로 문자열도 char 포인터에 대입하여 사용할 수 있다.


#include <stdio.h>

int main() 
{
	char *dessert = "apple";					 // 포인터에 문자열 초기화

	printf("오늘 후식은 %s입니다.\n", dessert);  // 문자열 출력
	dessert = "banana";							 // 새로운 문자열 대입(포인터 변수이므로 가능)
												 // char dessert = "apple"; 처럼 문자열 자체로 선언되있었으면 dessert에 바꿔서 대입하는것은 불가능

	printf("내일 후식은 %s입니다.\n", dessert);  // 바뀐 문자열 출력

	return 0;
}

/*
char *pa = "apple";
char *pb = "apple";
printf("%p, %p", pa, pb);

컴파일러는 같은 문자열을 여러번 사용한 경우 하나의 문자열만 메모리에 저장하고 그 주소를 공유하도록 번역한다.
따라서 같은 문자열을 계속 사용해도 프로그램의 크기가 커지는일은 없다.

단, 컴파일러가 메모리 사용을 줄이려는 최적화기능이므로 컴파일러가 다르게 구현될 수 있으므로 
소스코드에 같은 문자열을 두 번 이상 사용하고 그 주소를 출력하고 같은 값인지를 살펴보는 것이 중요하다.
*/