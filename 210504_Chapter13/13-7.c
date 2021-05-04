/*
주소를 전달하는 방법

13-6 예제에서 add_ten에 a를 인수로 둔것을 &a로 바꿔보고 실행해보자.
*/

#include <stdio.h>

void add_ten(int a);

int main()
{
	int a = 10;

	add_ten(&a);				 // a의 주소를 add_ten에 인수로 전달
	printf("a : %d\n", a);	    

	return 0;
}

void add_ten(int *pa)			 // 포인터 pa가 main의 a 주소를 받음
{
	*pa = *pa + 10;				 // 포인터 pa가 가리키는 변수의 값에서 +10을 해줌
							     // 포인터를통해 *pa에 + 10을 증가시켜줬기때문에 main에서 a를 출력하면 20이 출력될것이다.
}

/*
값을 복사해서 전달하는 방식은 원본데이터를 보존할 수 있으므로 안정성이 있다. 
그러나 원본의 데이터 수정이 목적일 경우 사용법이 제한적임.

주소를 전달하는 방식은 원본 데이터를 바꿀때는 유용하지만 사용법이 복잡하고 절대 바꾸면 안되는 데이터를 다룰때 사용하면 문제가 생긴다.
따라서 꼭 필요한 경우가아니면 값을 복사해서 전달하는 방식을 기본으로함.


원본데이터 바꿀필요없다 : call by value
절대바꾸면안되는 데이터를 다룰때 :  call by reference

C에서는 콜바이레퍼런스가 주소를통해 사용
*/
