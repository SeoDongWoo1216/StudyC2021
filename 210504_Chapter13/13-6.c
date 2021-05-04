/*
값을 복사해서 전달하는 방법(call by value)
*/
#include <stdio.h>

void add_ten(int a);

int main() 
{
	int a = 10;

	add_ten(a);				 // a값을 복사하여 전달
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)			 // main에 있는 a와 다른 독립적인 저장 공간을 할당해줌
{
	a = a + 10;				 // main에서 받아온 매개변수 a에 10을 더해줌
							 // 근데 함수가 끝났기때문에 20을 갖고있는 a가 소멸됨
}