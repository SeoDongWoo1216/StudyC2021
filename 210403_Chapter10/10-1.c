#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int ary[3];
	int i;

	// ★★★★★★★★★★★
	// ary[0] == *(ary + 0) 임
	//        == *주소   // 가 되기때문에 데이터를 나타냄
	// [ ] 를 풀어쓰면 *( ) 와 똑같음
	 
	// &ary 는 ary[0]와 같다.
	// 배열의 이름은 배열의 시작주소이기때문.
	// ★★★★★★★★★★★
	
	*(ary + 0) = 10;				// ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10;   // ary[1] = ary[0] + 10

	printf("세번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary+2);              // &ary[2]

	for (i = 0; i < 3; i++)          // 모든 배열 요소 출력
	{
		printf("%5d", *(ary + i));   // ary[i] 의 값들을 출력
	}

	return 0;
}