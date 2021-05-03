/*
문자열을 출력하는 puts, fputs 함수
puts 함수 원형  => int puts(const char *str)  // 문자열을 출력하고 자동으로 줄 바꿈
fputs 함수 원형 => int fputs(const char *str, FILE *stream);  // 문자열을 출력하고 줄 바꾸지 않음
 
const를 쓰는 이유?
put는 출력의 기능을 가지고있다.(배열의 값을 건드리지않음)
근데 출력만해야하는데 사용자가 값을 변형시킬수도있기때문에 그 가능성을 아예 차단해버리기위해 const 키워드를 사용한다. (원본 그대로를 출력하라는뜻)
*/

#include<stdio.h>
int main() 
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);          // 자동개행해주는 출력함수
	fputs(ps, stdout);  // 개행기능없는 출력함수
	puts("milk");       

	return 0;
}

// 
