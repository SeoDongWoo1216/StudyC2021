// 문자열은 주소(포인터)이다.
// 문자열 상수가 주소란 증거를 예제를 통해 알아보자

#include <stdio.h>

int main() 
{
	printf("저장할 문자열 : %s\n", "apple");
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");     // 주소 값 출력(인데 &가 없어도 주소값이 출력되는 것을 확인할 수 있다)
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);      // 주소 값 + 1 을 통해 두번째 문자 주소가 나옴
	printf("첫 번째 문자 : %c\n", *"apple");                   // 간접 참조 연산 *를 통해 시작주소의 데이터 출력
	printf("두 번째 문자 : %c\n", *("apple" + 1));             // 포인터 연산식을 통해 시작 주소의 그 다음 주소(두번째방)의 데이터 출력
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);   // 배열 표현식

	// 문자열 자체가 포인터, 주소 이기때문에 배열로도 사용가능. => 주소연산식, 배열연산식 사용가능
}

/*
주소로 접근해서 문자열을 바꾸면 안된다.
*"apple" = 't'; 에서 왼쪽은 상수라서 바꾸는것이 불가능하다. 이때 컴파일러는 문제없다고할 수 있지만 운영체제가 강제종료시킨다.
배열에 저장된건 바꿀 수 있는데, 문자열형태는 상수형태로 저장되있기때문에 바꾸려고하지 않는 것이 중요하다.
*/