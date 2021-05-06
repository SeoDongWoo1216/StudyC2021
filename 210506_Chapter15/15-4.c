// 주소로 쓰이는 배열명과 배열의 주소 비교

#include<stdio.h>

int main() 
{
	int ary[5];

	printf("  ary의 값 : %u\t", ary);      // 주소로서의 배열명의 값
	printf("ary의 주소 : %u\n", &ary);     // 배열의 전체의 시작 주소
	printf("   ary + 1 : %u\t", ary + 1);  // 1이 int형이므로 주소값 + 4가 되어서 출력
	printf("  &ary + 1 : %u\n", &ary + 1); // 주소 값에서 배열 전체값을 +해서 출력(+ 20이 됨)

	return 0;
}