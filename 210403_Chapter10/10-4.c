// 포인터의 뺄셈과 관계 연산

#include<stdio.h>

int main() 
{
	int ary[5] = { 10,20,30,40,50 };
	int* pa = ary;				     // 첫번째 배열 요소 주소
	int* pb = pa + 3;                // 네번째 배열 요소 주소
	// 이때 pb는 ary[0]인 pa에서  +3을 통해 ary[4]가됨

	printf("pa : %u\n", pa);
	printf("pb : %u\n\n", pb);

	pa++;                               // pa++를 통해 pa는 0번방 -> 1번방으로 이동
	printf("pb - pa : %u\n", pb - pa);  // 3번방 - 1번방이니 2가 나옴
	
	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return 0;
}