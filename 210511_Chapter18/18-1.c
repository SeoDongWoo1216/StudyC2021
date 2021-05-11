/*
파일개방과 입출력
하드디스크에 저장되있는것을 응용프로그램으로 가져올예정
main에서 선언되있는건 시작되자마자 실행되는것인데 프로그램이 종료되면 날라감.
근데 이것을통해 HDD에 저장해서 프로그램을 실행시키고 HDD에 프로그램을 불러오면 응용프로그램에 사용가능하다.

stream에 깊이있게 다루는 단원.(운영체제가 stream 3개를 자동으로 만들어줌) -> 프로그램과 입출력장치의 다리 역할을하는 논리적인 파일
1. 입력stream(stdin)  -> keyboard
2. 출력stream(stdout) -> 모니터
3. 에러stream(stderr) -> 모니터

fopen 함수는 파일명과 개방 모드를 문자열로 주면 원하는 파일을 찾아 개방해준다.
fp = fopen("a.txt", "r");
 "a.txt" : 개방할 파일명
 "r"     : 개방 모드

 개방모드
 r : 읽기위해 개방 ( 파일없으면 NULL(포인터) 반환)
 w : 파일의 내용을 지우고 쓰기위해 개방 ( 파일없으면 새로운 파일 생성)
 a : 파일의 끝에 추가하기위해 개방 (파일없으면 새로운 파일 생성)


 fclose(FILE*);
 개방한 파일을 더 이상 사용하지 않으면 fclose함수로 닫아줘야한다.
*/

// 파일을 열고 닫는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE* fp;                                // 파일 포인터

	// fopen 함수를 호출하면 메모리에 stream을 만들어줌.
	fp = fopen("D:\\GitRepository\\StudyC2021\\210511_Chapter18\\a.txt", "r");  // a.txt파일을 읽기 전용으로 개방

	if (fp == NULL)                          // fp가 널 포인터면 파일개방 실패
	{
		printf("파일이 열리지 않았습니다");  // 안내 메시지 출력
		return 1;                            // 프로그램 종료
	}

	printf("파일이 열렸습니다.\n");  
	fclose(fp);                       // 파일닫기.(메모리 사용이 제한적이기때문에 작업이끝나면 닫는습관이 필요함)

	return 0;
}

/*
a.txt가 HDD에서 실행됨.
우리가 짠 프로그램은 RAM에서 실행됨
둘이 위치하는 영역이 다르기때문에 HDD에있는 데이터를 메모리에 사용하려고하면 stream으로 파일을 만들어줌.
(stream에 파일 구조체(파일의 정보(수정날짜, 크기, 이름 등이 들어있음)가 들어있음))

파일구조체 멤버하나가 버퍼에 저장함. 파일하나가 버퍼의 주소를 가리킴.(버퍼를 사용하는것임)

실제 데이터는 보조메모리(HDD)에 저장됨.
HDD가 블럭단위로 저장되는데 실제 버퍼의 크기는 블럭단위가된다.
파일포인터는 버퍼의 주소를 가리킴.
실제로 우리가 stream과 버퍼에 파일을 변환하고 가리키는것을 하는게 아니기때문에 fopen, fclose만해서 데이터를 읽을수있다는것만 알면됨.
*/