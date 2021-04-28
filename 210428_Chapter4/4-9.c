// sizeof 연산자
// 이름뒤에 괄호가 있는것은 함수 printf()
// sizeof는 연산자로써 sizeof a  처럼 괄호를 쳐주지않아도됨.
// 근데 sizeof(1.5+3.4) 같은 경우는 값이 이상하게 나오기때문에 괄호를쳐줌.

#include<stdio.h>
int main() 
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기     : %d\n", sizeof(a));
	printf("int형 변수의 크기     : %d\n", sizeof a);  // 괄호없어도됨.
	printf("double 형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기    : %d\n", sizeof(10));
	printf("수식의 결과값 크기    : %d\n", sizeof(1.5 + 3.4)); // 이런경우 괄호가 꼭 필요
	printf("char 자료형의 크기    : %d\n", sizeof(char));

	return 0;
}