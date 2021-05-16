#include<stdio.h>

int main() 
{
	char str[80];
	printf("문자열 입력 : ");  // 입력 안내 메세지 출력

	gets(str);                 // 빈칸을 포함한 문자열 출력

	puts("입력된 문자열 : ");  // 문자열 상수 출력

	puts(str);                 // 배열에 저장된 문자열 출력
	                           // puts 자동으로 개행시켜주는 특징이있다.
							   // 속도는 puts가 빠름.
	// printf는 상대적으로 무거움
	/*
       gets, puts는 컴파일러든지간에 지원이됨
	   scanf, printf는 지원안될수도있음 => 리소스가 적으면 부담스러움(많은 연산이 이뤄지기때문에)
	*/
	
	return 0;
}
