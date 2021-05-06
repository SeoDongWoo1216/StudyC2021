// 함수를 사용하는 이유
// 1. 재사용
// 2 . 가동성


// 이중포인터를 사용한 포인터 교환(Swap 함수를통해서 두 문자열을 바꾸는예제)
#include <stdio.h>

void Swap_ptr(char**, char**);

int main() 
{
	char* pa = "success";                    // 포인터 변수에 저장된 친구들
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);  // 바꾸기 전
	Swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);  // 바꾼 후

	return 0;
}


// 두 문자열 교환하는 함수
// ★이중 포인터로 받는것에 주목하자★
void Swap_ptr(char** ppa, char** ppb) 
{
	char* pt;      // temp처럼 임시 변수

	pt = *ppa;     // pt = pa;
	*ppa = *ppb;   // pa = pb;
	*ppb = pt;     // pb = pt;
}
