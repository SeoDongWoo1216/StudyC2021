// 프린트f 출력로 내이름은 ㅁㅁㅁ입니다
// 나의 키는 ddd이고, 몸무게는 fff입니다. (소수한자리까지)

#include <stdio.h>
int main() {
	printf("내 이름은 %s입니다.\n", "서동우");
	printf("제 키는 %d cm이고, 몸무게는 %.1lf kg입니다.\n", 190, 200.1234);

	return 0;
}