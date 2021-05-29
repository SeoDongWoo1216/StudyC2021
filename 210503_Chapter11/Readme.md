## 11. 문자
프로그램에서 문자를 사용할때 항상 작은 따옴표를 붙여준다. <br>
컴파일러는 a를 변수명으로 해석하는 반면, 'a'는 문자 상수로 해석한다. <br>
그러나 이런 문자 표현법은 컴파일 후에는 약속된 정수 값인 아스키 코드 값으로 바뀌기 때문에 의미가 없다. <br>

예를들어, 문자 상수 'a'는 정수 값 97로 바뀐다. <br>
문자는 메모리에 저장되는 방식이 정수와 같다는 것을 추론할 수 있는데, int형 변수에 저장하고 정수처럼 연산할 수도 있다. <br>
즉, 문자 'a'를 %d로 출력하면 97로 출력하고, 97을 %c로 출력하면 아스키 코드 값인 97인 문자를 출력한다. <br>
결론적으로 문자 상수 'a'와 정수 97은 같은 데이터이며, 변환 문자열의 종류에 따라 출력 형태가 결정되는 것이다. <br>

-----------------------------------------------

### 아스키 코드
아스키 코드는 128개 문자를 0~127의 숫자 중에 각각 어떤 값으로 표현할지 정의한 것이다. 자주 사용하는 아스키 코드값은 대략 다음과 같다. <br>
```C
숫자 문자(10개) : '0' ~ '9'   
아스키 코드값 : 48 ~ 57
```

```C
대문자 알파벳(26개) : 'A' ~ 'Z'
아스키 코드 값 : 65 ~ 90
```

```C
소문자 알파벳(26개) : 'a' ~ 'z'
아스키 코드 값 : 97 ~ 122
```

```C
특수 문자(33개) : ' '(공백), '$', '&' ... 등등   
아스키 코드값 : 32, 36, 38
```

```C
제어 문자(33개) : '\0', '\t', '\n', '\r' ... 등등   
아스키 코드값 : 0, 9, 10, 13
```
<br>

대략 아스키 코드 값의 특징을 다음과 같이 알 수 있는데,
- 알파벳과 숫자는 각각 연속된 아스키 코드 값을 갖는다.
- 소문자가 대문자보다 아스키 코드 값이 크다.
- 제어 문자는 백슬래시와 함께 표시하며 출력할 때 그 기능을 수행한다.

이런 특징을 활용하여 대문자를 소문자로 바꾸는 예제를 살펴보자.

```C
// 알파벳의 대소문자 변환 원리
// a(97) - A(65)를 뺀 32를 더하고빼서 대소문자를 변환이 가능하다.

#include <stdio.h>

int main(void) 
{
	char small;
	char cap = 'G';					        // char형 변수 선언과 초기화

	if ((cap >= 'A') && (cap <= 'Z'))	    // 만약 문자열이 대문자범위라면(아스키코드값 A(65) ~ Z(90) 사이라면)
	{
		small = cap + ('a' - 'A');			// 대/소문자의 차이를 더해 소문자로 변환 
						// (cap의 아스키코드값) + (a(97) - A(65)) 값을 뺀 32의 값이 저장됨.
	}

	printf("대문자 : %c %c", cap, '\n');    // '\n'를 %c로 출력하면 줄이 바뀜.
	printf("소문자 : %c", small);

	return 0;
}


// 결과
대문자 : G
소문자 : g
```
<br>
예제를 살펴보면, <br>
문자 상수는 4바이트의 크기를 갖지만 아스키 코드 값이 0~127의 범위에 있으므로 2진수로 바꾸면 왼쪽 바이트는 0이되고 오른쪽 1바이트만 의미를 갖게된다. <br>
따라서 문자는 1바이트 크기의 char형 변수에 저장해 사용할 수 있다. <br>
컴파일러는 문자에서 아스키 코드 값을 갖는 오른쪽 1바이트만 변수에 저장하고 남는 바이트는 버린다. <br>

```C
문자 G : 00000000 00000000 0000000 01000111   // 0으로 가득한 3자리는 저장할 공간이 없으므로 버려지고, cap에 0100011이 저장된다.
```

cap에 저장된 문자가 대문자의 코드 값 범위에 속하는지 조건문을 통해 검사하고, 대문자이면 소문자로 바꾸어 변수 small에 저장된다. <br>
이때 대문자와 소문자의 아스키코드 값의 차이는 32인데, ('a' - 'A' => 97 - 65)를 통해 동적으로 구할 수 있다. <br>
따라서, 대문자 'G'에 'a' - 'A' 를 더해주면 소문자 'g'를 구할 수 있다. <br><br>

scanf("%c %c", cap, '\n'); 가 있는 예제 코드를 보면 줄이 바껴서 입력되는 것을 볼 수 있는데,<br>
제어 문자를 프로그램에서 상수로 쓸 때는 백슬래시와 제어 기능을 암시하는 문자를 사용한다. <br>
즉, 줄을 바꾸는 문자는 new line의 n을 따서 '\n'과 같이 표현한다. <br>
제어 문자는 형태가 없으므로 %c로 출력하면 해당 제어 기능이 수행된다. 따라서 cap에 저장된 문자를 출력 한 후에 줄을 바꿔준다. <br>

-----------------------------------------------

### scanf 함수를 사용한 문자 입력
scanf 함수로 문자를 입력할때는 %c 변환 문자를 사용한다. <br>
%c는 알파벳, 숫자 모양의 문자 등의 형태가 있는 문자를 입력하지만 공백이나 탭문자, 개행 문자와 같은 제어 문자도 입력하므로 기억하는 것이 좋다. <br>
이들 세 문자는 숫자를 입력할 때 값을 구분하기 위해 사용되지만 문자를 입력할때는 그 자체가 하나의 입력 데이터가 된다. <br>

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2);  // 2개의 문자를 연속 입력

	printf("[%c%c]\n", ch1, ch2);
	printf("%d, %d\n", ch1, ch2);
	
	return 0;
}

/*
문자를 2개입력하는데 경우의 수
1. as  처럼 2개의 문자를 같이 입력해서 엔터치는경우     => [as]출력
2. a s 처럼 1개 입력하고  띄어쓰기하고 1개 입력하는경우 => [a' ']출력
3. a 입력하고 엔터 입력하는 경우						=> [a    출력
*/

// 스페이스바와 엔터도 아스키코드값이있기때문에 문자로 처리하는 것을 기억하자.

// 결과
ab  
[ab]       => a와 b를 연속으로 입력하고 엔터 치는 경우
97, 98

a 
[a ]       => a와 공백( )을 연속으로 입력하고 엔터 치는 경우
97, 32

a
[a
]          => a만 입력하고 엔터를 치는 경우
97, 10
```
<br>

첫번째 실행결과는 문자 'a'와 'b'가 차례로 ch1, ch2에 저장되서 그대로 출력된다. <br>
두번째 실행결과는 문자 'a'가 ch1에 저장되고 공백 문자가 ch2에 저장된다. 실행결과의 [] 안에 공백이 출력된 것을 확인할 수 있다.  <br>
세번째 실행결과는 문자 'a'만 입력하고 바로 엔터를 눌렀지만, 엔터에 해당하는 문자인 개행 문자('\n')가 ch2에 저장된다. <br>
따라서 ch1에 입력돤 문자 'a'가 출력되고, ch2에 저장된 개행 문자가 출력되므로 줄이 바뀌어서 출력된 것을 확인할 수 있다. <br><br>

제어문자를 %c로 출력하면 제어 문자의 기능을 수행하므로 문자의 기능을 느끼지 못할수도 있다. <br>
이때 %d를 써서 각 변수에 저장된 문자의 아스키 코드 값을 출력하면 입력된 문자를 좀 더 명확히 확인 할 수 있다.<br>
공백 문자는 32, 개행 문자는 10을 출력한다. <br>

```C
int a, b;
scanf("%d %d", &a, &b);   // 이때 공백은 입력받는 a, b를 구분하는 용도로 사용.
printf("%d %d", a, b);

// 결과
2 3
2 3
```
2개의 int형 변수에 정수를 동시에 입력하는 경우, scanf 함수가 호출되어 키보드로 '10(공백)20'과 같이 입력하면 중간에 있는 공백 문자는 10과 20을 구분하는 용도로 쓰인다. <br>
그러나 %c는 문자를 입력하므로 스페이스바도 입력 대상이 된다. <br>

scanf함수는 %c 앞에 스페이스를 사용하면 문자도 분리하여 입력할 수 있는 특별한 기능이 있다. <br>
만약 스페이스바, 탭, 엔터를 제외해서 문자들만 사용하고 싶다면 %c앞에 앞의 3개 중 아무거나 추가하면 된다. <br>
이때는 보통 공백을 사용하는 것이 가장 쉬우므로 한 칸을 띄우고 입력을 받는다. <br>

```C
scanf(" %c %c", &ch1, &ch2);
```
이 경우 scanf 함수는 입력 문자 중에서 스페이스바, 탭, 엔터를 무시하고 그 외의 문자만 입력한다. <br>

-----------------------------------------------

### getchar 함수와 putchar 함수
scanf 함수는 문자 뿐만 아니라 숫자도 입력하는 기능이 포함되어있으므로 문자만 입력하는 함수에 비해 크기가 크다. <br>
따라서 문자만 입출력하는 함수인 getchar 함수와 putchar 함수를 알아보자. <br>

```C
int getchar(void);  // 매개 변수가 없고 입력한 문자를 반환
int putchar(int);   // 출력할 문자를 인수로 줌.
```

```C
#include <stdio.h>

int main() 
{
	int ch; 

	ch = getchar();              // scanf처럼 ch에 문자 하나를 입력받는 함수(실패하면 -1을 반환)
	printf("입력한 문자 : "); 
	putchar(ch);                 // 입력받은 ch를 출력
	putchar('\n');               // 그냥 개행용 putchar

	return 0;
}

/*
★★★★★★★
getchar를 받는 ch의 데이터타입이 int인 이유??
키보드입력값이 아스키코드 0~127 범위 내에있고, getchar가 문자 이외의 값도 반환하기 때문.
실패하면 -1를 반환하는데, 이것을 위해 int형으로 선언해주어야함.
★★★★★★★
*/

// 결과
A
입력한 문자 : A
```
<br>
getchar 함수는 매개변수가 없으므로 괄호만 사용하여 호출한다. <br>
호출된 함수는 키보드로 입력한 문자의 아스키 코드 값을 반환하므로 반환값은 int형 변수로 받는데, 반환 값은 필요에 따라 char형 변수나 배열에 옮겨서 문자나 문자열로도 사용한다.<br>
getchar 함수는 scanf함수와 마찬가지로 공백, 탭, 개행문자도 입력하는데 이들 문자를 제외하는 옵션은 없다. <br><br>

putchar 함수는 문자 상수나 문자의 아스키 코드 값을 인수로 주면 해당 문자를 화면에 출력한다. <br>
그리고 출력한 문자를 다시 반환하며 출력 과정에서 에러가 발생하면 -1을 반환한다. <br>

-----------------------------------------------

### 버퍼를 사용하는 입력 함수
버퍼는 프로그램에서 직접 할당하는 것이 아니고 프로그램을 실행하는 중에 운영체제가 자동으로 할당하는 메모리의 저장 공간이다. <br>

-----------------------------------------------

### scanf 함수가 문자를 입력하는 과정
버퍼는 데이터를 보관하는 역할을 하므로 최초 입력할 때 필요한 데이터를 한꺼번에 저장해놓으면 scanf함수는 호출 즉시 버퍼에서 데이터를 가져올 수 있다. <br>

```C
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char ch;
	int i;
	
	for (i = 0; i < 10; i++) 
	{
		scanf("%c", &ch);   // 문자입력
		printf("%c", ch);   // 입력된 문자 출력
	}

	return 0;
}

/*
콘솔창에 'tiger' 를 입력하고 엔터를치면
t i g e r 엔터  가 버퍼에 저장된다.
키보드입력은 1번으로 끝나는데, 두번째 scanf함수 호출부터는 버퍼에 남아있는 문자열에서 차례대로 가져오므로 새로운 키보드입력이 필요없다.
대신, scanf함수에 버퍼에 저장된 데이터를 모두 가져오면 키보드에서 추가로 데이터를 입력해야한다.
for문 조건문을 6으로바꾸고 입력하면 개행이되는데, 엔터입력받은게 그대로 저장되서 출력되었기때문
*/


/*
버퍼를 사용해서 좋은점?
1. 데이터를 안정적으로 입력받을 수 있음.(멀티로 딴짓하다가 버그가 생길수도있는데, 이때 데이터의 소실이 일어나지않음)
2. 입력장치와 독립적으로 사용할 수 있음.
*/

// 결과
tiger
tig
```
<br> 
이 예제는 문자열 입력하고 화면에 출력하는 과정을 세 번 반복하는데, 실행결과는 한번의 키보드 입력으로 끝난다. <br>
최초 scanf 함수가 호출될 때 키보드로 문자열을 입력하면 일단 버퍼에 저장한 후에 첫번째 문자만 변수에 저장한다. <br>
두번째 scanf 함수 호출부터는 버퍼에 남아있는 문자열에서 차례로 다음 문자를 가져오므로 결국 새로운 키보드 입력이 필요없는 것이다. <br><br>

입력 데이터는 엔터를 누르는 순간 버퍼에 저장되며 개행 문자도 함께 저장된다. <br>
따라서 버퍼에 있는 개행 문자도 하나의 데이터로 입력될 수 있다. 개행문자가 나올때까지 문자를 반복적으로 입력해서 출력하면 키보드로 입력한 한 줄의 데이터를 길이와 상관없이 화면에 출력할 수 있다. <br>

#### 입출력 함수가 버퍼를 사용하면 좋은 점
- 데이터를 안정적으로 받을 수 있다. : 프로그램이 다른 일을 처리할때, 입력을 즉시 받지못해도 데이터가 사라지지 않아서 안정적이다.
- 입력장치와 독립적으로 사용할 수 있다. : 입력장치가 바뀌더라도 함수를 수정하지 않고 사용할 수 있다.

-----------------------------------------------

### scanf 함수 반환값 활용
키보드로 한 줄을 입력할 때 입력을 끝내려면 엔터를 누르면 된다. <br>
그런데 개행 문자 또한 하나의 입력 데이터로 쓴다면 입력을 종료하는 별도의 신호가 필요하다. 이때 scanf 함수의 반환값을 사용한다. <br><br>

scanf 함수는 컨트롤 + Z를 누르면 -1을 반환한다. <br>
-1을 반환하기 전까지 반복 입력하면 개행 문자를 포함한 모든 문자를 데이터로 사용할 수 있다. <br>

```C
// 입력문자의 아스키 코드 값을 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int res;
	char ch;
	printf("문자열 아무거나 입력(컨트롤 Z + 엔터 + 컨트롤 Z 누르면 종료)\n");
	while (1) 
	{
		res = scanf("%c", &ch);
		if (res == EOF)
		{
			printf("종료합니다\n");
			break;					// 반환값이 -1이면 종료
		}
		printf("%d ", ch);          // 결과값에 10이 계속 딸려오는데, 엔터(개행)의 아스키코드가 10임.
	}

	return 0;
}
// scanf는 입력한 개수를 반환
// 문자를 제대로 입력하면 1을 반환, 컨트롤Z를 누르면 -1를 반환

/*
EOF : End Of File
res == -1 대신에 res == EOF 를 입력하면 동일한 결과가 나온다.
stdio.h 헤더파일에 EOF라는 이름을 바꾸는 전처리 지시자가 있으므로 -1 대신 EOF를 사용하면 좀 더 읽기 쉬운 코드를 작성할 수 있다.
*/

// 결과
A
65 10 cat
99 97 116 10    // 10까지 입력하고 컨트롤 제트를 누르면 종료된다.
```
<br>
이 예제는 입력과 출력이 엔터를 기준으로 반복된다.<br>
첫번째 행의 입력은 두번째 행에서 아스키 코드 값을 출력하고 새로운 입력을 받는다. <br>
입력한 데이터는 엔터를 누르는 순간 버퍼로 저장되고 반복문이 수행되면서 버퍼의 문자를 하나씩 가져다 아스키 코드 값을 출력한다. <br>
버퍼의 데이터를 모두 처리하면 다시 키보드로부터 새로운 데이터를 입력받기 위해 대기 상태가 된다. <br>
다음 두번째 행의 입력도 똑같이 처리되고, 마지막에 컨트롤 + Z를 누르면 scanf함수는 -1을 반환하고 if문의 조건식이 break가 되어 반복문이 종료된다. <br><br>

키보드로 숫자를 입력하는 경우에도 일단 문자열의 형태로 버퍼에 저장된다. <br>
그 후에 문자열이 실제 연산이 가능한 값으로 변환되어 변수에 저장된다. 예를들어 int형 변수 a에 20을 입력하는 경우, '2'와 '0'이 각각 아스키 코드값으로 코드화되어 버퍼에 저장된다. <br>
그 후에 변환 문자의 지시에 따라 연산이 가능한 숫자로 변환되어 변수에 저장된다. <br><br>

결국 변환 문자는 코드화된 문자열을 숫자로 변환하는 방법을 scanf 함수에 알려주는 역할을 한다. <br>
만약 같은 입력에 대해 %lf 변환 문자를 쓰고 실수형 변수에 입력한다면 버퍼에 저장된 상태는 같지만, 변수에 저장되는 비트열의 크기와 형태는 달라질 것이다. <br>

-----------------------------------------------

### getchar 함수를 사용한 문자열 입력
getchar 함수도 버퍼를 사용하는 문자 입력 함수이다. 이 함수를 반복 사용하면 한 줄의 문자열을 char 배열에 입력할 수 있다. <br>

```C
#include <stdio.h>

void my_gets(char* str, int size);

int main() 
{
	char str[7];								// 문자열 저장

	my_gets(str, sizeof(str));					// 한 줄의 문자열을 입력하는 함수
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char* str, int size)				 // str은 char배열, size는 배열의 크기
{
	int ch;										 // getchar 함수의 반환값을 저장할 변수
	int i = 0;                                   // str 배열의 첨자

	ch = getchar();                              // 첫번째 문자 입력
	while ((ch != '\n') && (i < size - 1))		 // 배열의 크기만큼 입력 (ch값이 개행문자거나 사이즈 - 1이면 while문 빠져나감)
	{     
		str[i] = ch;             // 입력한 문자를 배열에 저장
		i++;                     // 인덱스(배열 요소) 증가
		ch = getchar();          // 새로운 문자입력
	}

	str[i] = '\0';               // 배열의 맨 끝에 입력한 문자열이 끝났음을 알리는 NULL 문자 저장
}
// 결과
a boy
입력한 문자열 a boy

Be happy!
입력한 문자열 : Be hap
```
<br>
위의 예제는 getchar 함수를 사용하여 키보드로 입력한 한 줄의 문자열을 char 배열로 저장한다. <br>
단, 배열의 크기를 넘는 무낮열을 입력한 경우도 배열의 크기 만큼한 입력하도록 작성하여 할당되지 않은 메모리를 침범하지 않도록 작성한다. <br>

```C
my_gets(str, sizeof(str)); 
```
함수 안에서는 최초로 문자를 입력하는데, 이때 키보드로 한 줄의 데이터를 모두 입력하여 버퍼에 저장해둔다. <br>
이후 getchar 함수를 반복 사용하여 버퍼로부터 문자를 하나씩 가져와 배열에 차례로 저장된다. <br>

```C
ch = getchar(); 
```

-----------------------------------------------

### 입력 버퍼 지우기
scanf와 getchar 함수는 같은 버퍼를 사용하며 입력 데이터를 공유하는데, 앞서 실행한 입력 함수가 버퍼에 남겨둔 데이터를 그 이후에 수행되는 함수가 잘못 가져갈 가능성이 있다. <br>
따라서 버퍼에 남아있는 불필요한 데이터는 미리 제거하는 것이 몸에 이롭다. <br>
입력 버퍼의 내용을 지우려면 버퍼에 남아있는 문자들을 모두 입력해서 사용하지 않고 버리면 된다. <br>

```C
/*
입력 버퍼 지우기
scanf와 getchar함수는 같은 버퍼를 사용하면서 입력 데이터를 공유한다.
따라서 앞서 실행한 입력 함수가 버퍼에 남겨둔 데이터를 그 이후에 수행되는 함수가 잘못 가져갈 수도 있다.
따라서 버퍼에 남아있는 불필요한 데이터는 미리 제거하는 것이 좋다.
사용법
버퍼에 남아있는 문자들을 모두 입력해서 사용하지않고 버리면된다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int num, grade;					// 학번과 학점을 저장할 변수


	// 문자 + 정수
	//printf("학점 입력 : ");
	//grade = getchar();              // 학점 입력
	//printf("학번 입력 : ");
	//scanf("%d", &num);				// 학번 입력
	
	// 정수 + 문자
	printf("학번 입력 : ");
	scanf("%d", &num);			// 학번 입력
	getchar();					// 버퍼에 남아있는 개행 문자 제거 (이거 주석처리해서 실행하면 밑에꺼가 그대로 출력만됨(입력안받음))
	// fflush();                   // getchar처럼 fflush도 가끔 사용함.
	printf("학점 입력 : ");
	grade = getchar();            // 학점 입력


	// 출력
	printf("학번 : %d, 학점 : %c", num, grade);
}

/*
문자입력하고 정수를 입력받을때는 getchar를 사용할 필요없다.
	문자 + 정수
	A 엔터 10 엔터
	A를 입력받고, %d를 받을때는 앞의 개행을 날림.
	정수 + 입력
	10 엔터 A 엔터
	10를 입력받고 엔터를 입력받아서 10 이랑 엔터가 출력됨(개행 자체를 문자로 인식함)
*/

// 결과
학번 입력 : 315
학점 입력 : A
학번 : 315, 학점 : A
```
<br>
위의 예제에서 scanf 함수는 일단 버퍼로부터 입력을 시도하지만 처음에는 버퍼가 비어있으므로 키보드로 입력받기 위해 대기한다. <br>
이때 315를 입력하고 엔터를 누르면 315와 개행 문자가 함께 버퍼에 저장된다. <br>
그 후 문자열 "315"는 정수로 변환되어 변수 num에 저장되고 버퍼에는 개행 문자만 남게 된다. <br>





