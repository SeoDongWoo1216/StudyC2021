## 18장 파일 입출력
프로그램으로 HDD의 데이터를 처리하는 파일 입출력 함수에 대해 알아보자.

---------------------------------------------------------------------------

### 파일 개방과 폐쇄
데이터를 입출력하기전에 준비하는 과정이 파일 개방이고, 사용이 끝난 파일은 닫는 과정이 필요한데 모두 함수 호출로 수행한다.<br>
이때 사용하는 함수가 fopen과 fclose 함수이다. 각각 file open, file close를 의미한다.
```C
// fopen 함수 원형
FILE *fopen(const char*, const char*);  // ()안에는 매개변수가 들어간다.
fp = fopen("a.txt", "r");               // 개방할 파일명, 개방모드가 매개변수로 들어간다.
```
파일명에는 경로를 적을수도있는데 이때 백슬래시(\)는 2번써줘야한다.<br>
fopen함수는 파일을 개방하지못하면 NULL(널 포인터)를 반환하기 때문에 예외 상황을 알리기위해 조건문을 사용한다.
```C
// fclose 함수 원형
int fclose(FILE *);  // fclose 함수는 성공적으로 닫았을때 0을 반환하고, 오류가 발생하면 EOF(End Of File)을 반환한다.
```


#### 개방모드
- r : 읽기위해 개방 ( 파일없으면 NULL(포인터) 반환) <br>
- w : 파일의 내용을 지우고 쓰기위해 개방 ( 파일없으면 새로운 파일 생성) <br>
- a : 파일의 끝에 추가하기위해 개방 (파일없으면 새로운 파일 생성) <br>

```C
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
		printf("파일이 열리지 않았습니다");    // 안내 메시지 출력
		return 1;                            // 프로그램 종료
	}

	printf("파일이 열렸습니다.\n");  
	fclose(fp);                       // 파일닫기(메모리 사용이 제한적이기때문에 작업이끝나면 닫는습관이 필요함)

	return 0;
}
```

---------------------------------------------------------------------------


### 문자 입력 함수 fgetc
fgetc 함수는 파일에서 하나의 문자를 입력하여 반환한다. <br>
예제를 살펴보기 전에 같은 프로젝트 폴더에 "a.txt" 라는 이름을 가진 텍스트 파일에 "apple" 을 입력해서 저장하고 예제를 살펴보자.
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE* fp;            // 파일 포인터 선언
	int ch;              // 입력한 문자를 저장할 변수

	fp = fopen("a.txt", "r");  // 읽기 전용으로 파일 개방(w : 쓸것이다, a : 추가해서 작성할것이다, r : 읽기만할것이다)
	if (fp == NULL)            // 파일이 개방되었는지 확인
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	while (1) 
	{
		ch = fgetc(fp);
		if (ch == EOF)   // 함수의 반환값이 EOF면 입력 종료(End Of File 로써, -1로 자동으로 정의되어있기도함)
		{
			break;
		}
		putchar(ch);     // 파일안의 내용(문자)을 화면에 출력
	}
	fclose(fp);          // 파일 닫기(사용이 끝난 파일은 즉시 닫아서 스트림파일의 데이터를 장치에 기록하는 것이 좋음)

	return 0;
}
```
앞의 예제에서 파일의 개방과 닫는것은 했으므로 생략하고, while(1)에 있는 구문에 fgetc 함수를 통해 파일 포인터와 연결된 파일에서 하나의 문자를 읽어서 반환하여 ch에 저장한다. <br>
그리고 파일의 데이터를 모두 읽으면 EOF를 반환하기때문에 조건문으로 반복문을 탈출하는 것으로 제어할 수 있다.<br>

---------------------------------------------------------------------------

### 문자 출력 함수 fputc
한 문자를 파일로 출력할때는 fputc 함수를 사용한다. 출력할 문자와 파일 포인터를 fputc의 인수로주면 파일로 문자를 출력할 수 있다.<br>
반환값은 출력한 문자를 다시 반환하며, 에러가 발생하면 EOF를 반환한다. <br>
예제를 살펴보기전에 같은 프로젝트 폴더에 "b.txt" 이름을 가진 텍스트 파일을 생성해두자.(데이터는 없어도된다)<br>

```C
// 문자열을 한 문자씩 파일로 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp;                   // 파일 포인터 선언
	char str[] = "banana";      // 출력할 문자열
	int i;

	fp = fopen("b.txt", "w");   // 쓰기 전용으로 개방(b.txt파일을 새로 만들어줌)
	if (fp == NULL)             // 파일 개방 확인
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	i = 0;                      // 문자 배열의 첫 번째 문자부터 출력
	while (str[i] != '\0')      // 널문자가 아니면
	{
		fputc(str[i], fp);      // 문자를 파일에 출력
		i++;                    // 다음 문자로 이동
	}

	fputc('\n', fp);            // 파일 닫음
	fclose(fp);

	// 나중에 폴더에 생성된 b.txt를 실행해보면 banana가 입력되어있다.

	return 0;
}
```
예제를 실행한 후에 "b.txt" 을 열어보면 banana 텍스트가 입력된 것을 확인할 수 있다.

---------------------------------------------------------------------------

### 기본적으로 개방되는 표준 입출력 스트림 파일
운영체제는 프로그램을 실행할때 기본적으로 3개의 스트림파일을 만든다. 그리고 이들을 키보드와 모니터 등에 연결하여 입출력 함수들이 파일 포인터 없이 사용할 수 있도록 제공한다. <br>
- stdin  : 표준 입력 스트림 -> 키보드 입출력
- stdout : 표준 출력 스트림 -> 모니터 입출력
- stderr : 표준 에러 스트림 -> 모니터 입출력

```C
// 18-4 표준 입출력 스트림을 사용한 문자열 입력 : getchar, putchar 사용
// 18-5 stdin과 stdout을 사용한 문자 입출력
#include <stdio.h>

int main() 
{
	int ch;              // 입력한 문자를 저장할 변수

	while (1) 
	{
		//ch = getchar();  // 키보드에서 문자 입력
		ch = fgetc(stdin);

		if (ch == EOF)   // 컨트롤 + Z 로 입력 종료
		{
			break;
		}
		// putchar(ch);     // 화면에 문자 출력
		fputc(ch, stdout);
	}
	return 0;
}
```
예제를 실행해보면 문자열을 입력하고 엔터를치면 입력한 문자열이 출력되는 구문이 반복적으로 실행되다가 컨트롤 + Z를 입력하면 프로그램이 종료된다.<br>

getchar() 함수는 내부적으로 stdin을 사용하여 표준 입력 스트림 파일의 버퍼를 통해 입력한다. <br>
getchar함수가 처음 호출되면 키보드에서 입력하는 데이터는 개행 문자와 함께 stdin 스트림 파일의 버퍼에 한꺼번에 저장된다.<br>
putchar() 함수는 모니터와 연결된 표준 출력 스트림을 사용하며, 표준 에러 스트림은 출력 과정에서 발생하는 오류 메세지 등을 화면으로 확인할 수 있도록 출력 경로를 제공한다.<br>

또는<br>

stdin 를 사용해서 표준 입력 스트림과 연결된 키보드에서 문자를 입력하고 <br>
stdout을 사용해서 표준 출력 스트림과 연결된 장치인 모니터로 출력한다. <br>
마지막에 컨트롤 + Z를 입력하면 EOF를 반환하여 반복을 종료하게된다.<br>
결국 하나의 문자를 반복적으로 입력하지만, 스트림 파일의 버퍼를 사용하므로 문자열을 한 줄씩 입출력하는 기능을 수행하게된다. <br>

-----------------------------------------------
