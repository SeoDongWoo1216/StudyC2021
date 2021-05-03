/*
scanf와 gets는 문자열의 크기가 배열 크기를 넘어설 위험이있는데, 이렇게되면 프로그램 에러가 발생할 것이다.
안전하게 문자열을 입력하려면 배열 크기를 확인하는 fgets를 사용하는 것이 좋다.
fgets 함수는 배열의 최대 크기만큼만 문자열을 입력한다.(크기를 초과하면 나머진 안받음)
stdin은 H/W와 응용프로그램을 연결시켜주는 연결고리이다.(입력, 출력이있음)
*/

#include <stdio.h>

int main() 
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : "); 
	fgets(str, sizeof(str), stdin);
	// 나중에 입력할 공간
	printf("입력된 문자열은 %s입니다.", str);

	return 0;
}

/*
fgets(배열명, 배열의 크기, 표준입력)
fgets 함수는 문자열을 저장할 배열명 외에 배열의 크기와 표준 입력 버퍼를 뜻하는 stdin을 함께 사용한다.
1. 배열명
2. 배열의 크기 : 입력한 문자열의 끝에는 항상 null문자를 붙이므로 최대로 '배열의 크기 - 1개'의 문자만을 저장한다.
3. stdin(표준입력) : 데이터를 입력할때 키보드와 연결된 표준 입력 버퍼를 뜻한다.
fgets 함수가 입력 버퍼를 선택할 수 있는 함수이므로 키보드로 입력할 때는 항상 stdin을 넣어야한다.
(참고로, scanf와 gets함수는 기본적으로 표준입력을 사용한다)
*/

/*
apple jam엔터   를 입력하면 엔터(개행)문자까지 버퍼에 저장된다.
이때 맨끝에 개행 문자 다음에 \0을 붙여서 저장되기때문에 개행문자를 없애고 저장하기위해 '배열의 크기 - 1개' 를 해주는것.
*/


/*
strlen(배열) : 문자열의 길이 구해주는 함수
*/