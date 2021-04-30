// 포인터의 특성 : 변수처럼 쓸수있기때문에 증감연산자가 사용가능하다.

#include<stdio.h>

int main() 
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)     // 
	{
		printf("%d ", *pa);     // pa가 가리키는 배열 요소 출력
		pa++;                   // 다음 배열 요소를 가리키도록 pa값 증가

		// 처음에서 ++을하면 두번째방의 요소를 출력하게됨
	}

	return 0;
}