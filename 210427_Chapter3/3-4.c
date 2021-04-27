#include <stdio.h>

int main() 
{
	unsigned int a;  // 나는 양수만 사용하겠다는 뜻의 unsigned

	a = 4294967295;     // 큰 양수 저장
	printf("%d\n", a);  // %d로 출력(부호까지 생각해서 10진수로 출력하는 변환문자)
	a = -1;             // 음수 저장
	printf("%u\n", a);  // %u로 출력(부호 없는 10진수로 출력하는 변환문자)

	return 0;
}