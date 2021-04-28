// 전위표기, 후위표기의 차이점을 알아보는 예제

#include <stdio.h>
int main() 
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초기값 a = %d\n", a);
    printf("초기값 b = %d\n\n", b);

	printf("전위형 : (++a) * 3 = %d\n", pre);  // a를 ++해서 6*3이됨
	printf("후위형 : (b++) * 3 = %d\n\n", post); // b*3을하고 b를 ++해줌
	
	printf("%d", b); // 윗줄에서 b는 5*3 연산을했지만 지금 b를 출력하면 6이나옴

	return 0;
}