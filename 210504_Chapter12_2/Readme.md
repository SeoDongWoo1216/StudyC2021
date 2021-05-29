## 12-2 문자열 연산
- strcpy 함수에서 문자열을 볻사 받는 곳은 배열이어야한다.
- strcat 함수로 문자열을 최초로 붙일때는 초기화를 해야한다.
- 배열에 저장된 실제 문자열의 길이를 알고 싶을때 strlen 함수를 쓴다.
- strcmp 함수로 문자열의 사전 등록 순서를 확인할 수 있다.

---------------------------------------------------------------------

### 문자열을 대입하는 strcpy 함수
char 배열은 문자열을 저장하는 변수의 역할을 하며 쉽게 문자열로 초기화할 수 있다. <br>
그러나 다른 문자열로 바꾸는 것은 문자를 하나씩 옮기는 번거로운 일을 수행해야한다. <br>

```C
char str1[80] = "strawberry";
str1[0] = 'a';
str1[1] = 'p';
str1[2] = 'p';
str1[3] = 'l';
str1[4] = 'e';
str1[5] = '\0';
```
이때 마지막에 NULL 문자도 저장해야한다. NULL문자를 뺀채로 대입하면 apple이 아니라 appleberry가 된다. <br>
이렇게 하나씩 대입하는 방법이 귀찮으니 문자열을 한번에 대입하는 strcpy함수가 있다. <br>

```C
strcpy(복사받을 곳, 복사할 내용); 
첫번째 인수 : 복사받을 곳의 배열명
두번째 인수 : 복사할 문자열
```

```C
// strcpy 함수의 사용법
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>							// strcpy 함수를 사용하기위한 헤더파일

int main() 
{
	char str1[80] = "strawberry";			// char 배열에 문자열 초기화
	char str2[80] = "apple";				// char 배열에 문자열 초기화

	char* ps1 = "banana";					// 포인터로 문자열 상수 연결
	char* ps2 = str2;						// 포인터로 배열 연결

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);						// 다른 char 배열의 문자열 복사
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);						// 문자열 상수를 연결한 포인터 사용
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);						// 배열을 연결한 포인터 사용(배열이와도됨)
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}

//결과
최초 문자열 : strawberry
바뀐 문자열 : apple
바뀐 문자열 : banana
바뀐 문자열 : apple
바뀐 문자열 : banana
```
strcpy 함수는 두가지만 기억하면된다.
- 첫번째 인수는 char 배열이나 배열명을 저장한 포인터만 사용할 수 있다.
- 두번째 인수는 문자열의 시작위치를 알 수 있따면 어떤 것이든 사용할 수 있다.

strcpy함수를 사용하려면 string.h 헤더파일을 인클루드해서 사용해야한다.

---------------------------------------------------------------------

### 원하는 개수의 문자만을 복사하는 strncpy 함수
strncpy 함수는 문자열을 복사할때 문자의 수를 지정할 수 있다.

```C
strncpy(복사받을 배열명, 복사할 문자열, 복사할 문자수);
```

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	char str[20] = "mango tree";    // 배열 초기화

	strncpy(str, "apple-pie", 5);   // "apple-pie"에서 다섯 문자만 복사("apple" 이 복사됨)
	// str[5] = '\0';					// 널문자(\0)를 넣어주면 apple까지 출력된다.
	printf("%s\n", str);            // "mango tree" -> "apple tree" 출력

	return 0;
}

// 결과
apple tree
```
strncpy 함수는 복사할 문자열에서 지정한 개수만큼 문자열을 복사하고 NULL문자는 저장하지 않는다. <br>
따라서 위의 예제를 보면 str배열에서 mango만 apple로 바뀌므로 결국 str배열에 저장된 문자열은 "apple tree"가 된다. <br>
만약 str 배열이 문자열 "apple"로만 쓰이도록하려면 apple을 복사한 후에 NULL문자를 별도로 저장해야한다. <br>

```C
str[5] = '\0'; // 마지막에 NULL문자 추가
```

---------------------------------------------------------------------

### 문자열을 붙이는 strcat, strncat 함수
strcpy함수는 초기화된 문자열을 지우고 새로운 문자열로 바꿀때 사용한다. <br>
반면에 배열에 있는 문자열 뒤에 이어 붙일때는 strcat 또는 strncat 함수를 사용한다. 일종의 더하기 연산이다. <br>

strcat는 문자열을 이어붙이고,
strncat는 지정한 문자의 개수만큼 붙인다.

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() 
{
	char str[80] = "straw";

	strcat(str, "berry");			// str 배열에 문자열 붙이기
	printf("%s\n", str);

	strncat(str, "piece", 3);		// str 배열에 3개의 문자 붙이기
	printf("%s\n", str);

	return 0;
}

// 결과
strawberry
strawberrypie
```

strcat 함수를 사용할때는 주의할 점이있다. <br>
- strcat 함수는 메모리를 침범할 수 있다.=> 배열의 크기를 충분히 할당해줘야한다. <br>
- strcat함수를 사용할때는 배열을 초기화해야한다. => 붙여넣기전에 널문자 위치를 찾으므로 반드시 초기화해주어야한다. <br>
만약, 초기화하지않으면 쓰레기 값의 중간부터 붙여넣을 가능성이 크다. <br>

```C
char str[80] = {'\0'}; // 명시적으로 널문자 초기화
char str[80] = {0};    // 널 문자의 아스키코드값으로 초기화
char str[80] = "";     // 큰따옴표 안에 아무것도 없으므로 널문자만 초기화
char str[80] = '\0';   // 첫번째 배열 요소만 별도로 초기화
```

strncat 함수는 붙여넣을 문자 수를 지정할 수 있는데, strncpy 함수와 달리 붙여넣은 후에는 NULL 문자를 저장하여 문자열을 완성시켜준다는 차이점이있다. <br>

---------------------------------------------------------------------

### 문자열 길이를 계산하는 strlen 함수
char 배열을 선언할때 문자열의 길이를 정확히 알 수 없기때문에 충분히 크게 선언해서 사용한다. <br>
따라서 배열에 저장된 문자열의 길이는 실제 배열의 크기와 다를 수 있다. <br>
배열에 저장된 문자열의 실제 길이를 알고싶을때는 strlen 함수를 사용한다. <br>

```C
strlen(str);   // str은 크기를 확인할 배열명
```

```C
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>							  // strlen 함수 사용을 위한 헤더파일

int main() 
{
	char str1[80], str2[80];				  // 두 문자열을 입력할 배열
	char* resp;								  // ★문자열이 긴 배열을 선택할 포인터★

	printf("2개의 과일 이름 입력 : ");		
	scanf("%s%s", str1, str2);				  // 2개의 문자열 입력
	if (strlen(str1) > strlen(str2))		  // 배열에 입력된 문자열의 길이 비교
	{
		resp = str1;						  // 첫번째 배열이 긴 경우 선택
	}
	else 
	{
		resp = str2;						  // 두번째 배열이 긴 경우 선택
	}
	printf("이름이 긴 과일은 : %s\n", resp);  // 문자열이 긴(if문을 통해 선택된) 배열을 출력

	return 0;
}

// 결과
2개의 과일 이름 입력 : banana strawberry
이름이 긴 과일은 : strawberry
```

strlen 함수는 배열에 저장된 문자열에서 NULL 문자가 나올때까지 문자수를 세어서 반환해준다. <br>
따라서 배열의 크기와는 상관없이 실제 저장된 문자열의 길이를 확인할 수 있다. <br>
문자열의 길이를 반환하므로 반환값을 바로 비교하거나 수식의 일부로 사용할수도있다. <br>

#### sizeof 연산자와 strlen 함수의 차이?
sizeof는 방의 크기이기때문에 배열에 저장된 문자열 길이와는 상관없이 배열 전체 크기를 계산한다. <br>
strlen은 문자 길이를 return 해준다. <br>

```C
char str[80] = "apple";
printf("%d", sizeof(str));  // 출력 결과는 80
printf("%d", strlen(str));  // 출력 결과는 5
```

---------------------------------------------------------------------

### 문자열을 비교하는 strcmp, strncmp 함수
strcmp 함수는 두 문자열의 사전 순서를 판단하여 그 결과를 반환한다. 사전 순서를 비교할때는 두 문자의 아스키코드값을 비교한다. <br>
사전 순서는 단어가 수록되는 알파벳 순서를 말하며, 함수의 사용법과 반환 값은 다음과 같다. <br>

```C
strcmp(str1, str2);  // str1이 str2보다 사전에 나중에 나오면 1 반환
                     // str1이 str2보다 사전에 먼저 나오면 -1 반환
                     // str1이 str2가 같은 문자열이면 0 반환
```

```C
int main() 
{
	char str1[80] = "pear";
	char str2[80] = "peach";

  //strcmp 함수 사용
	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0)					  // str1이 str2보다 크면 => 사전에 나중에 나오면 
	{
		printf("%s\n", str1);
	}
	else					
	{
		printf("%s\n", str2);  
	}

	return 0;
}

// 결과
사전에 나중에 나오는 과일 이름 : pear
```
strcmp 함수는 두 문자열에서 첫문자의 아스키코드값을 비교하여 반환값을 출력하는 원리로 동작한다. <br><br>

strncmp함수는 strcmp함수와 거의 같지만 비교할 문자 수를 세번째 인수로 지정할 수 있다. <br>
즉, pear와 peach 앞에서부터 3개의 문자만 비교하는 경우 결과로 0을 반환한다. <br>
```C
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() 
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	// strncmp 함수 사용
	printf("앞에서 3개의 문자만 비교하면?\n");
	if (strncmp(str1, str2, 3) == 0) 
	{
		printf("같다.\n");
	}
	else 
	{
		printf("다르다.\n");
	}
	return 0;
}

// 결과
앞에서 3개의 문자만 비교하면?
같다.
```










---------------------------------------------------------------------

### 실습) 알파벳을 입력했을때 소문자를 입력하면 대문자를 출력하기(대문자는 소문자로)
```C
// A~Z : 65~90
// a~z : 97~122

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char input = '\0';
	int size = 'a' - 'A';
	while (1) 
	{
		printf("알파벳 하나를 입력해주세요(!입력시 종료) : ");
		scanf(" %c", &input);

		if (input <= 90 && input >= 65)					// 대문자(65~90)를 입력받으면
		{
			input += size;
			printf("소문자로 변환 : %c\n\n", input);
		}
		else if (input <= 122 && input >= 97)		    // 소문자(97~122)를 입력받으면
		{
			input -= size;
			printf("대문자로 변환 : %c\n\n", input);
		}
		else if (input == 33)						    // 느낌표(아스키코드33)을 입력받으면 
		{
			printf("종료합니다\n\n");
			break;
		}
		else
		{
			printf("\n알파벳을 입력해주세요\n\n");
		}
	}
}

// 결과
알파벳 하나를 입력해주세요(!입력시 종료) : a
대문자로 변환 : A

알파벳 하나를 입력해주세요(!입력시 종료) : A
소문자로 변환 : a

알파벳 하나를 입력해주세요(!입력시 종료) : !
종료합니다
```

