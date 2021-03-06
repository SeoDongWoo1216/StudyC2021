## 3장 변수와 데이터 입력

### 3-1 변수 
변수는 변하는 수를 의미하며, 데이터 타입에맞게 선언해줘서 사용해야한다.
```C
int a;   // 정수형 변수의 선언
a = 10;  // a에 10을 대입
```
'='는 대입 연산자로, 오른쪽의 값(R-value)을 왼쪽값(L-value)에 넣으라는 뜻이다. <br>
이때 왼쪽값은 변수, 오른쪽 값은 상수여야한다. (10 = a; 는 에러가뜬다. 10은 상수이기때문)

### 3-2 자료형
자료형은 정수와 문자로 나뉜다.<br>
정수는 정수와 실수<br>
문자는 문자와 문자열 로 나뉜다.<br>

#### 정수의 자료형 
- char  : 1바이트 <br>
- short : 2바이트 <br>
- int   : 4바이트 <br>
- long  : 4바이트 <br>
- long long : 8바이트 <br>

#### unsigned 예약어
: 음수가 없는 데이터를 저장할때 사용하는 예약어. (unsigned int를 사용하면 -21억 ~ 21억 => 0 ~ 42억이 된다.) <br>
- unsigned char  : 1바이트 <br>
- unsigned short : 2바이트 <br>
- unsigned int   : 4바이트 <br>
- unsigned long  : 4바이트 <br>
- unsigned long long : 8바이트 <br>

#### 실수의 자료형
- float  : 4바이트 <br>
- double : 8바이트 <br>

#### 문자
- 문자 1개를 저장할때는 char a = 'A'; 로 저장할 수 있다. <br>
- 문자열을 저장할때는 char 배열을 이용해야한다. <br>
```C
char arr[문자열길이 + 1] = "저장할문자열";  // []는 배열의 크기, ""는 문자열을 적으면된다.(+1은 맨끝에 null을 추가하기위함)
```
배열은 처음에만 대입연산자를 통해 초기화할 수 있다. <br>
배열은 주소이기때문에 상수처럼 처리된다. 이때 대입연산자로 대입하려고하면 에러가 발생한다. <br>

★주의★<br>
short형에 %d를 사용하면 안되는데, %d는 4바이트짜리이고, short형은 2바이트이므로 <br>
short형에 2바이트를 초과한 값을 집어넣을수도있기때문에 컴파일러가 미리 차단하므로 자료형과 그에 맞는 변환문자를 참고하도록하자.<br>
(이는 형변환에도 연관되어있다.)<br>

### 3-3 const 예약어
: 변수가 저장 공간이므로 그 값을 바꿀 수 있지만, 변수를 선언할때 그 앞에 const를 붙이면 초기화된 값을 바꿀 수 없다. <br>
```C
const int a = 10;  
// a = 20;   // const로 a = 10; 을 해줬기때문에 에러가 발생한다.
```

### 3-4 예약어와 식별자?
- 예약어(reserved word 또는 keyword)는 컴파일러와 사용방법이 약속된 단어이고,<br>
- 식별자(identifier)는 필요에따라 만들어 사용하는 단어이다.<br>
예를들어, 변수 선언문에서 자료형 이름은 예약어이고, 변수명은 식별자이다.<br>
```C
int age;  // int는 예약어, age는 식별자
```

### 3-5 scanf 함수 사용법
```C
scanf("%d", &a);  
```
- scanf를 사용할때 변수명 앞에는 항상 &를 붙여야한다.(&는 주소를 나타냄, 배열이나 포인터에는 안써도되는데 다음에 알아보자.)
- scanf에서 함수에서 사용한 변환문자와 변수의 데이터의 타입이 항상 일치해야한다.<br>
- #include위에 *#define _CRT_SECURE_NO_WARNINGS* 를 붙여줘야함.(scanf가 주소를 건드리기때문에 보안관련 이슈가있는데, 명시적으로 내가 상관하지않겠다는뜻)


## 퀴즈
정수, 문자 하나를 각각 입력받고 출력하는 프로그램 작성. <br>
```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
첫번째 정수를 입력하고 엔터를 입력하는데,
이때 a+엔터가 남아있기때문에 b에는 엔터를 입력받아서 호출되서 결과가 이상하게뜬다.
따라서 공백을 하나 남겨서 scanf를 연속으로 쓰는것이 바람직함

또는
getchar()를 사용하면됨
*/

int main()
{
	int a;
	char b;

	printf("정수하나를 입력하세요 : $");
	scanf("%d", &a);
	
	getchar();  
	printf("문자하나를 입력하세요 : $");
	scanf("%c", &b);
	// scanf(" %c", &b);  // 버퍼를위해 공백을 한칸 띄우고 scanf 실행하는게 좋음

	printf("입력된 값은 %d 입니다.\n", a);
	printf("입력된 문자는 %c입니다.\n", b);

	return 0;
}

```
![3장테스트결과](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/210427_Chapter3/result_Image/3.test.PNG)

정수하나 입력받고 문자하나를 입력할때, 엔터키가 문자입력에 남아있기때문에 콘솔화면의 결과가 이상하게 출력될수도있다.<br>
이럴때는 scanf("%c");  => scanf(" %c"); 처럼 한칸 띄워서 작성하거나 getchar()를 문자입력전에 작성해서 오류를 줄일 수 있다.<br>
