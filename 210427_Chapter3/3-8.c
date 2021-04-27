// const를 사용한 변수
// 변수를 상수화시킬때 사용. => ★반드시 선언과동시에 초기화시켜서 사용해야한다.★
// const int a; 로 선언하면 선언했을때의 쓰레기값으로 고정되기때문에 상수로 초기화시켜야함.

#include<stdio.h>

int main()
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	// tax_rate = 0.15; // 상수에 상수를 대입하려고하니까 에러뜸

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}
/*
	내가 미리 이 단어를 사용하겠다고 예약하는것이 예약어(자료형 이름)
	필요할때마다 만들어서 사용하는 것이 식별자(변수명)
	변수를 선언만했을때 쓰레기값만 들어가있을때 컴파일러가 컴파일을 해주지않음(에러)
*/