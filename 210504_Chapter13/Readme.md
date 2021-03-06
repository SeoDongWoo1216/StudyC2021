## 13. 변수의 영역과 데이터 공유
- 값을 복사해서 인수로 전달되면 호출하는 함수의 값은 바뀌지 않는다.
- 호출하는 함수의 값이 바뀌려면 주소를 인수로 전달해야 한다.
- 정적 지역 변수나 전역 변수와 같이 함수가 반환된 후에도 저장 공간이 유지되는 경우만 주소를 반환한다

<br>

### 변수 사용 영역
3장부터 변수를 알아봤고 계속 사용해왔다. 우리가 지금까지 사용한 변수는 대부분 지역변수 였다. 단순히 **자료형** **변수명**; 으로 선언했던 것도 auto라는 예약어가 생략된 문장이었다.
```C
auto 자료형 변수명;
```
이번 절에서는 변수의 종류에대해 알아보려한다. 변수는 사용범위가 메모리에 존재하는 기간에따라 종류가 다양하다.

--------------------------

### 지역 변수
지금까지 사용했던 변수는 **지역 변수**이다. 지역 변수는 범위가 함수 내, 즉 일정 지역에서만 사용하는 변수이다. <br>
auto 예약어와 함께 함수 안에 지역변수를 선언한다. 이때 auto 예약어는 생략할 수 있으며 이 경우 함수 안에 선언된 변수는 자동으로 지역변수가 된다. <br><br>

지역 변수는 프로그램에서 가장 많이 사용하며 다음과 같은 특징이 있다. <br>
#### 1. 지역 변수는 사용범위가 블록 내부로 제한되므로 다른 함수에서는 사용할 수 없다. <br>
따라서 다른 함수에 같은 이름의 변수를 선언해도 이름이 서로 충돌하지 않는다. 간단한 예제를 통해 확인해보자. <br>

```C
/*  13-1 지역 변수
지역 변수는 사용 범위가 블록 내부로 제한되므로 다른 함수에서는 사용할 수 없다.
=> 이럴때 포인터를 사용
*/

#include <stdio.h>

void assign(void);

int main() 
{
	auto int a = 0;					    // 지역 변수 선언과 초기화, auto는 생략 가능

	assign();							// 함수 호출
	printf("main 함수 : %d\n", a);

	return 0;
}

void assign(void)
{
	int a;								// main 함수에 있는 변수와 같은 이름의 지역 변수, auto 생략

	a = 10;							    // assign 함수 안에 선언된 a에 대입 
	printf("assign 함수 a : %d\n", a);  // assign 함수에 선언된 a 값 출력
}

// 결과
assign 함수 a : 10
main 함수 : 0
```

<br>

위 예제에는 같은 이름의 변수를 두 번 선언했지만 함수가 다르므로 문제가 되지 않는다. <br>
main 함수의 a는 assign의 a와 전혀 다른 변수이다. <br>
만약 assign 함수에 변수 a의 선언문이 없다면 assign 함수에서 사용한 a는 정체를 알 수 없으므로 컴파일 에러가 발생한다. <br>
이때 두 함수에 있는 변수 a의 저장 공간이 할당되는 방식도 사용 범위와 무관하지 않다. <br><br>

#### 2. 지역 변수는 이름이 같아도 선언된 함수가 다르면 각각 독립된 저장 공간을 갖는다.
즉, 두 함수가 선언된 변수 a는 이름만 같을 뿐 메모리에 별도의 저장공간을 갖는다. <br>
따라서 assign 함수가 호출된 이후에도 main 함수에 있는 a의 값은 바뀌지 않는다. <br><br>

#### 지역 변수 사용의 장점
지역 변수의 사용 범위를 함수 단위로 제한하고 독립된 저장 공간을 확보하면 2가지 장점이 있다. <br>

#### 1. 메모리를 효율적으로 사용한다.
지역 변수는 함수 안에서만 사용하므로 함수가 반환되면 저장 공간을 계속 유지할 필요가 없다. <br>
따라서 운영체제는 지역 변수가 선언된 함수가 반환되면 할당된 저장 공간을 자동으로 회수하여 재활용한다. <br>

#### 2. 디버깅에 유리하다.
지역 변수는 값에 문제가 있을때 수정하기 쉽다. <br>
그런데 지역 변수가 할당된 저장 공간은 자동으로 초기화되지 않으므로 쓰레기 값이 사용되지 않도록 주의해야 한다. <br>
또한 사용 범위가 하나의 함수로 제한되므로 2개 이상의 함수에서 데이터를 공유하기가 쉽지 않다. <br>
그러나 이런 불편함보다 장점이 더 크므로 다른 종류의 변수보다 지역 변수를 최우선으로 사용해야합니다. <br>
지역 변수를 여러 함수에서 공유하는 방법은 다음 절에서 자세히 알아보자. <br><br>

#### 함수의 매개변수는 지역변수이다.
함수를 만들때 괄호 안에 선언하는 매개변수는 호출할 때 전달되는 값을 받기 위해 특별한 위치에 선언하는 것일 뿐이다. <br>
이때 매개변수는 사용 범위나 메모리에 존재하는 기간 등 변수가 갖는 모든 특징은 지역 변수와 같다. <br>

--------------------------------

### 블록 안에서 사용하는 지역 변수
지역 변수는 함수 안에서 선언한 후 함수 끝까지 사용하지만 선언 위치에 따라 사용범위가 달라질 수 있다. <br>

#### 1. 특정 블록 안에 변수를 선언하면 사용 범위가 블록 내부로 제한된다.
메모리에 할당된 저장 공간도 블록이 끝나면 자동으로 회수되어 더 이상 존재하지 않는다. <br>
일단 지역 변수를 블록안에 사용하는 예제를 살펴보자. <br>

```C

/*
13-2 블록 안에서 사용하는 지역 변수
*/

#include <stdio.h>

int main() 
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}

	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}

// 결과
교환 전 a와 b의 값 : 10, 20
교환 후 a와 b의 값 : 20, 10
```

<br>

main 함수에서 블록 안에 선언된 temp는 블록 안에만 선언된 지역 변수이므로 사용 범위가 그 블록 내부로 제한된다. <br>
메모리에서 할당된 저장 공간도 블록 끝에서 회수되므로 블록 이후에는 temp를 사용할 수 없다. <br>
반면 지역 변수 a와 b는 main 함수 블록 어디서든 사용할 수 있으므로 main 함수에 포함되있는 블록에서 얼마든지 사용할 수 있다. <br>
다만 블록이 중첩된 경우 주의할 규칙이 있다. <br><br>

#### 2. 사용 가능한 변수가 둘 이상이면 가장 가까운 블록에 선언된 변수를 사용한다.
예를들어 main함수안에있는 블록 안에 새로운 변수 a, b를 선언하면 그 블록 안에서는 main 함수 안에서 선언된 변수 a와 b 대신 가까운 블록에 선언된 변수 a와 b를 사용한다. <br>
안쪽 블록에서 선언된 변수 a와 b는 메모리에 독립된 저장공간을 가지므로 안쪽 블록에서 a나 b 값을 바꿔도 main 함수안에 있는 블록 밖의 a와 b 값에는 변함이 없다. <br>
그리고 안쪽 블록에서 선언된 변수들은 블록이 끝나면 저장 공간이 회수되어 더 이상 사용할 수 없으므로 
<br>결국 main함수 안의 블록 끝에서 a, b를 출력하면 바뀌지 않은 main 함수 안의 변수 a, b가 출력된다. <br><br>

굳이 이렇게 사용하는 이유는 특정 블록 안에 변수를 선언하면 필요한 경우 잠깐 사용하고 메모리를 재활용하는 효과를 볼 수 있기 때문이다. <br>
즉, 두 변수 a, b의 값을 바꾸는 데 사용할 임시 변수는 블록 안에서만 필요하므로 블록 안에 변수를 선언하여 잠깐 사용하는 것이 메모리 관리에 도움이 될 수 있다. <br>
그러나 중첩된 블록에서 같은 이름의 변수를 선언하면 예상치 못한 결과를 얻을 수 있으므로 지양해야한다. <br><br>

--------------------------------

### 전역 변수
함수 밖에 변수를 선언하면 전역 변수가 된다. **전역 변수**는 특정 함수의 블록에 포함되지 않으므로 사용 범위가 함수나 블록으로 제한되지 않는다. <br>
전역 변수의 사용 범위는 프로그램 전체이므로 어떤 함수라도 안에서 직접 쓸 수 있다. 예제를 통해 구체적인 특징을 살펴보자. <br>

```C
// 13-3
#include <stdio.h>

void assign10(void);
void assign20(void);

int a;										 // 전역변수는 컴파일러가 자동으로 0으로 초기화시켜준다

int main(void) 
{
	printf("함수 호출 전 a 값 : %d\n", a);   // 전역 변수 a 출력

	assign10();  
	assign20();

	printf("함수 호출 후 a 값 : %d\n", a);   // 전역 변수 a 출력

	return 0;
}

void assign10(void) 
{
	a = 10;									 // 전역 변수 a에 10 대입
}

void assign20(void) 
{
	int a;									 // 전역 변수와 같은 이름의 지역 변수 선언
	a = 20;									 // 지역 변수 a에 20 대입
}

// 결과
함수 호출 전 a 값 : 0
함수 호출 후 a 값 : 10
```

<br>

main 함수 위의 a 선언이 전역 변수를 선언한 부분이다. 함수 밖에 변수를 선언하면 전역 변수가 되며 특별한 예약어는 사용하지 않는다. <br>
전역 변수는 특정 함수 안에 있는 것이 아니므로 저장 공간이 메모리에 존재하는 기간이 지역 변수보다 훨씬 길다. <br><br>

프로그램이 실행될 때 메모리에 할당되고 프로그램이 끝날 때까지 존재한다. 따라서 전역 변수를 선언한 a는 main, assign10, assign20 3개의 함수에서 모두 사용할 수 있다. 
main 함수에서 처음 a를 호출하고, 실행결과를 보면 전역 변수의 초기화 여부를 알 수 있다. 전역 변수는 특별한 값으로 초기화하지 않아도 0으로 자동 초기화된다.
```C
printf("함수 호출 전 a 값 : %d\n", a);
```

#### 전역 변수와 같은 이름의 지역 변수
assign10 함수가 호출되면 a가 10으로 바뀐다. 그리고 이어서 assign20 함수가 호출되어 a에 20을 대입하지만 전역 변수 a는 바뀌지 않는다. <br>
assign20 함수 안에 전역 변수 a와 같은 이름의 지역 변수가 있기 때문이다. <br><br>

전역 변수와 지역 변수의 이름이 같으면 지역 변수를 먼저 사용한다. <br>
즉, assign20에 선언된 지역 변수는 같은 이름의 전역 변수보다 먼저 사용되므로 그 값이 20으로 바뀌며 전역 변수 a에는 변화가 없다. <br>
따라서 함수가 반환되고 난 후 main함수의 printf를 통한 변수 a의 출력은 assign10에서 저장한 값 10이 그대로 남아있게 된다. <br><br>

#### 전역 변수의 문제점
전역 변수는 모든 함수에서 자유롭게 접근할 수 있으므로 같은 변수를 여러 함수에서 쉽게 공유할 수 있다. <br>
그러나 이런 특징은 장점보다 부작용이 더 크므로 사용을 꺼리는 이유가 된다. <br>

##### 전역변수의 이름을 바꾸면 그 변수를 사용하는 모든 함수를 찾아 수정해야한다.
##### 전역 변수의 값이 잘못된 경우 접근 가능한 모든 함수를 의심해야한다.
##### 코드 블록 내에 같은 이름의 지역 변수를 선언하면 그 영역에서는 전역 변수를 사용할 수 없다.

결국 사용 범위가 명확하고 통제 가능한 지역 변수를 우선적으로 사용하며 전역 변수는 많은 함수에서 수시로 데이터를 공유하는 경우 제한적으로 사용하는 것이 좋다. <br>

---------------------------

### 정적 지역 변수
지역 변수를 선언할때 static 예약어를 사용하면 **정적 지역 변수**가 된다. 이는 코드 블록안에 선언하므로 일반 지역 변수와 같이 사용 범위가 내부 블록으로 제한된다. 
반면에 저장 공간이 메모리에 존재하는 기간이 다르다. <br><br>

정적 지역 변수는 선언된 함수가 반환되더라도 그 저장 공간을 계속 유지한다. <br>
따라서 하나의 함수가 여러번 호출되는 경우 같은 변수를 공유하는 것이 가능하다. <br>
일반 지역 변수와 정적 지역 변수의 차이를 예제를 통해 확인해보자. <br>

```C
/*
13-4 정적 지역 변수(static variable)
코드 블록안에 선언하므로 일반 지역 변수와 같이 사용 범위가 블록내부로 제한된다.
지역변수와 전역변수의 2가지 특징을 가지고있는 변수.
그러나, 저장 공간이 메모리에 존재하는 기간이 다르다.

정적 지역 변수는 선언된 함수가 반환되더라도 그 저장 공간은 계속 유지한다.
따라서 하나의 함수가 여러번 호출되는 경우 같은 변수를 공유하는 것이 가능하다.


지역변수는 함수가 호출될때 메모리에 할당되고 반환될때 메모리에서 제거된다.
정적지역변수는 저장공간이 할당되어 유지하는 시점이 함수 호출과는 무관하다.(프로그램 시작될때 할당되며, 프로그램이 종료될때 존재한다)

일반 지역 변수와 정적 지역 변수의 차이를 예제를 통해 알아보자.
*/

#include <stdio.h>

void auto_func(void);
void static_func(void);

int main() 
{
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) 
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) 
	{
		static_func();
	}

	return 0;
}

void auto_func(void) 
{
	auto int a = 0;	    // 지역 변수 선언과 초기화 (printf로 호출하면 함수가 끝나므로 메모리에서 없어지므로 계속 1만 출력됨)
						          // 지금까지 사용했던 지역변수에는 auto가 생략되어있다.

	a++;	// a값 1 증가
	printf("%d\n", a);  // a 출력
}

void static_func(void) 
{
	static int a;		    // 정적 지역 변수 선언 (printf로 호출하면 함수가 끝나고 메모리에 계속 남아있으므로 1, 2, 3이 호출된다)

	a++;  // a값 1 증가
	printf("%d\n", a);  // a 출력
}

// 결과
일반 지역 변수(auto)를 사용한 함수...
1
1
1
정적 지역 변수(static)를 사용한 함수...
1
2
3
```
  
<br>

먼저 auto_func 함수는 지역 변수 a를 선언하고 0으로 초기화한다. <br>
지역 변수는 함수가 호출될 때 메모리에 할당되고 반환될 때 메모리에서 제거되므로 변수 a는 auto_func 함수가 호출될때마다 메모리에 새롭게 할당되고 그때마다 0으로 초기화된다.
그 값을 a++을 통해 1 증가시키고 출력하므로 함수의 호출 횟수와 관계없이 a는 항상 1이 출력된다. <br>
main 함수의 for문 안에서 auto_func 함수는 3번 호출되지만 실행결과는 모두 1이 출력된 것을 확인할 수 있다. <br><br>

반면 static_func 함수의 static 예약어를 사용한 변수 선언은 저장 공간이 할당되어 유지하는 시점이 함수 호출과는 무관한다. <br>
static을 사용한 정적 지역 변수는 프로그램이 실행될 때 메모리에 할당되며 프로그램이 끝날때까지 존재한다. <br>
또한 정적 지역 변수는 초기화하지 않으면 0으로 자동 초기화된다. <br><br>

static_func 함수의 구현을 살펴보자. <br>
static으로 선언된 정적 지역변수는 비록 static_func 함수 안에 선언되었지만, 저장 공간의 할당이나 초기화 방법, 메모리 존재 기간이 전역 변수와 같다. 
결국 정적 지역 변수는 선언된 블록 안에서만 사용하는 전역변수와 같다. <br><br>

정적 지역 변수는 함수가 반환되더라도 저장 공간이 계속 유지되므로 함수에 필요한 값을 보관하여 호출할때마다 계속 사용할 수 있다. <br>
실행결과를 보면 static으로 선언된 a값은 최초 0으로 초기화된후 함수가 호출될때마다 1씩 증가하므로 1부터 3까지 차례로 출력된다. <br>
정적 지역 변수는 프로그램이 끝날 때까지 저장 공간을 유지하면서 특정 함수에서만 쓰는 경우에 유용하다. <br>

-------------------------------

### 레지스터 변수
**레지스터 변수**는 블록 혹은 함수 내에 변수를 선언할때 register 예약어를 사용한다. <br>
그렇다면 지역 변수와 차이점이 뭘까? 레지스터 변수의 가장 큰 특징은 저장 공간이 할당되는 위치에 있다. <br>
레지스터 변수는 CPU 안에 있는 저장 공간인 레지스터를 사용한다. <br><br>

레지스터는 CPU안에 있어 데이터 처리 속도가 가장 빠른 저장 공간이다. <br>
따라서 반복문에 쓰는 변수와 같이 사용 횟수가 많은 경우 레지스터에 할당되면 실행 시간을 줄일 수 있다. <br>
```C
/*
13-5 레지스터 변수 : 아주빠르게 연산을 해야할때 사용
레지스터는 CPU안에있는 레지스터를 사용하는데, 처리 속도가 가장 빠른 공간이므로 반복문같은 사용횟수가 많을때 사용하면 실행 시간을 줄일 수 있다.
(사용할지에 대한 판단은 운영체제가 한다.)

주의!
1. 전역 변수는 레지스터 변수로 선언할 수 없다
2. 레지스터 변수는 주소를 구할 수 없다.
3. 레지스터의 사용 여부는 컴파일러가 결정한다.
4. 나는 딱히 쓸일은 없으니 참고용으로만 알아두자.
*/

#include <stdio.h>

int main() 
{
	//register int i;
	int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; i++) 
	{
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

// 결과
50005000
```

<br>

main 함수에서 for문이 실행되면 i를 비교하고 증가시키는 작업을 계속 반복한다. <br>
또한 sum += i;를 사용하므로 i를 사용하는 횟수는 반복 횟수보다 3배 이상 많다.
```C
for( i = 1; i <= 10000; i++) sum += i;
```

이렇게 자주 사용하는 변수를 레지스터 변수로 선언하면 변수의 저장 공간이 램 메모리에 있을때보다 빨라 프로그램 실행시간을 줄일 수 있다. <br>
메인 메모리에 있는 일반 변수의 값을 레지스터로 옮긴 후에 연산 장치에 사용된다. <br>
따라서 레지스터에 값을 저장하면 메인 메모리에 접근하는 시간을 줄일 수 있다. <br><br>


#### 레지스터 변수 사용시 주의점
단, 레지스터 변수를 사용할때는 주의할 점이 있다.

##### 1. 전역 변수는 레지스터 변수로 선언할 수 없다.
레지스터 변수는 CPU의 자원을 잠깐 빌리는 것이므로 프로그램을 실행하는 동안 계속 저장 공간을 확보해야하는 전역 변수는 레지스터에 할당할 수 없다. <br>

##### 2. 레지스터 변수를 주소를 구할 수 없다.
레지스터 변수는 저장 공간이 메모리에 있는 것이 아니므로 연산자를 써서 주소를 구할 수 없다. <br>

##### 3. 레지스터의 사용 여부는 컴파일러가 결정한다.
레지스터 변수를 선언했다고 모두 레지스터에 변수가 생성되는 것은 아니다. <br>
레지스터는 CPU의 연산장치가 사용하는 비싸고 중요한 저장 공간이므로 당장 연산할 필요가 없는 데이터를 레지스터에 보관하면 레지스터의 활용성이 떨어진다.
따라서 컴파일러는 사용자가 레지스터 변수를 선언하더라도 레지스터와 메모리 중에 어디에 할당하는 것이 더 이득인지 판단하여 저장공간을 선택한다. <br>

------------------------------------

## 함수의 데이터 공유 방법
프로그램은 데이터와 명령으로 이뤄진다. 컴퓨터가 주로 하는 일은 데이터를 명령으로 처리하는 일인데, <br>
이때 특정 기능의 명령을 묶어서 함수로 만들어 사용한다. 그렇다면 함수 사이에 데이터를 공유하기위한 연결고리는 무엇일까? <br>
함수끼리 데이터를 어떻게 공유하는지 알아보자. <br>

### 값을 복사해서 전달하는 방법
함수를 호출할때 필요한 데이터를 전달하는 가장 일반적인 방법은 값을 복사해서 전달하는 것이다. <br>
이 방법은 함수를 호출할 때 변수뿐만 아니라 상수나 수식도 사용할 수 있으며 지금까지 여러 차례 사용했던 방법이다. <br>
이렇게하면 호출된 함수가 반환된 이후에도 호출한 함수에 있는 변수의 값은 변하지 않는다. 예제를 통해 무슨 뜻인지 살펴보자. <br>

```C
/*
13-6 값을 복사해서 전달하는 방법(call by value)
*/
#include <stdio.h>

void add_ten(int a);

int main() 
{
	int a = 10;

	add_ten(a);				 // a값을 복사하여 전달
	printf("a : %d\n", a);

	return 0;
}

void add_ten(int a)			 // main에 있는 a와 다른 독립적인 저장 공간을 할당해줌
{
	a = a + 10;				 // main에서 받아온 매개변수 a에 10을 더해줌
							 // 근데 함수가 끝났기때문에 20을 갖고있는 a가 소멸됨
}

// 결과
a : 10
```

<br>

main 함수에서 add_ten을 통해 변수 a를 인수로주고 함수를 호출한다. <br>
이 경우 a값이 복사되어 함수에 전달되며 add_ten 함수에서는 매개변수 a를 위한 저장 공간이 별도로 할당되어 인수로 넘어오는 값을 저장한다. <br><br>

코드만 봤을때는 a의 값은 20이 예상될 수 있는데, 실행결과는 10이 출력되었다. <br>
이는 매개변수 a의 메모리 주소에 저장된 값을 main 함수로 넘겨주지 않았기 때문이다. <br>
따라서 add_ten함수의 a = a + 10; 을 통해 매개변수 a를 증가시켜도 main 함수에 있는 a는 변함이 없다. <br><br>

만약 main 함수의 변수 a가 증가하기를 원한다면 add_ten 함수가 증가시킨 값을 반환하여 main 함수의 a에 다시 대입하는 방법을 사용해야한다. <br><br>

호출되는 함수에 값을 복사하여 전달하는 방식은 값을 출력하거나 연산하는 경우와 같이 출력하는 함수의 값을 필요없는 경우에 사용한다. <br>

----------------------

### 주소를 전달하는 방법
함수를 호출할 때 처리할 변수의 주소를 넘기는 방법도 있다. <br>
이 경우 포인터 연산으로 값을 처리해야 하므로 값을 전달하는 방법보다 불편하다. <br>
하지만 호출된 함수에서 호출한 함수에 있는 변수의 값을 바꿀 수 있다. <br>
13-6 예제를 수정하여 포인터로 main 함수에 있는 변수의 값을 바꿔보자. <br>

```C
/*
13-7 주소를 전달하는 방법

13-6 예제에서 add_ten에 a를 인수로 둔것을 &a로 바꿔보고 실행해보자.
*/

#include <stdio.h>

void add_ten(int a);

int main()
{
	int a = 10;

	add_ten(&a);				 // a의 주소를 add_ten에 인수로 전달
	printf("a : %d\n", a);	    

	return 0;
}

void add_ten(int *pa)			 // 포인터 pa가 main의 a 주소를 받음
{
	*pa = *pa + 10;				 // 포인터 pa가 가리키는 변수의 값에서 +10을 해줌
							     // 포인터를통해 *pa에 + 10을 증가시켜줬기때문에 main에서 a를 출력하면 20이 출력될것이다.
}

/*
값을 복사해서 전달하는 방식은 원본데이터를 보존할 수 있으므로 안정성이 있다. 
그러나 원본의 데이터 수정이 목적일 경우 사용법이 제한적임.

주소를 전달하는 방식은 원본 데이터를 바꿀때는 유용하지만 사용법이 복잡하고 절대 바꾸면 안되는 데이터를 다룰때 사용하면 문제가 생긴다.
따라서 꼭 필요한 경우가아니면 값을 복사해서 전달하는 방식을 기본으로함.

원본데이터 바꿀필요없다 : call by value
절대바꾸면안되는 데이터를 다룰때 :  call by reference

C에서는 콜바이레퍼런스가 주소를통해 사용
*/
```

<br>

main 함수의 add_ten 함수 호출을 통해 변수 a의 주소가 함수에 전달되며 add_ten함수는 포인터를 매개변수로 선언하여 받는다. <br>
따라서 (*pa = *pa + 10;) 을 통해 간접 참조 연산자를 사용하면 main 함수에 있는 a를 사용할 수 있으며 그 값을 바꾸는 것도 가능해진다. <br><br>

#### 값을 복사해서 전달하는 방식 vs 주소를 전달하는 방식
지금까지 두 가지 방식으로 함수의 데이터를 공유하는 방법을 알아보았다. <br>
이 두 방식은 각기 장단점이 있다. <br><br>

값을 복사해서 전달하는 방식은 원본 데이터를 보존할 수 있으므로 안정성을 담보해야하는 상황에 유용한다. <br>
다만 원본의 데이터 수정이 목적일 경우에는 사용법이 제한적이다. <br><br>

반대로 주소를 전달하는 방식은 원본 데이터를 바꿀대 유용하지만 사용법이 복잡하고 절대 바꾸면 안되는 데이터를 다룰때 사용하면 문제가 생길 수 있다.
따라서 꼭 필요한 경우가 아니면 값을 복사해서 전달하는 방식을 기본으로 사용한다. <br>

--------------------------

### 주소를 반환하는 함수
반환값이 있는 함수는 호출한 함수로 값을 복사해서 반환한다. <br>
함수 안에서 사용한 지역 변수는 함수가 반환되면 저장 공간이 사라지므로 그 값을 복사해서 반환해야 호출한 함수에서 사용할 수 있다. <br>
그러나 함수가 반환된 후에도 변수의 저장 공간이 계속 유지된다면 주소를 반환하여 호출하는 함수에서 쓸 수도 있다. <br>
즉, 정적 지역변수와 전역 변수는 주소를 반환할 수 있다. 예제를 통해 구체적으로 살펴보자. <br>

```C
/*
13-8 지역변수는 주소값으로 리턴시키면 안된다
*/
 
#include <stdio.h>

int* sum(int a, int b);	 // int형 변수의 주소를 반환하는 함수 선언

int main() 
{
	int* resp;			 // 반환값을 저장할 포인터 resp(result pointer)

	resp = sum(10, 20);  // 반환된 주소는 resp에 저장
	printf("두 정수의 합 : %d\n", *resp);    // resp가 가리키는 변수의 값 출력
}

int* sum(int a, int b)   // int형 변수의 주소를 반환하는 함수
{
	//static int res;		 // 정적 지역 변수
	int res;

	res = a + b;		 // 두 정수의 합을 res(result)에 저장

	return &res;		 // 정적 지역 변수의 주소 변환
}

// 지역변수의 값을 반환하려면 static으로 선언해야한다.
/*
반환값의 자료형은 반환값을 저장할 포인터의 자료형과 같아야한다.
지역 변수의 주소를 반환해서는 안된다. => 정적 지역변수의 주소를 사용해야한다.
*/

// 결과
두 정수의 합 : 30
```

<br>

호출하는 함수가 주소를 주고 호출하듯이 호출되는 함수도 주소를 반환할 수 있다. <br>
sum 함수는 매개변수에 받은 두 정수를 더한 후에 직접 반환하지 않고 res 변수에 저장하고 res의 주소를 반환한다. <br>
이 경우 호출한 함수에서는 그 값을 포인터에 저장하고 간접 참조 연산을 수행하여 언제든지 두 정수의 합을 사용할 수 있다. <br>
printf를 통한 출력은 단지 그 값을 출력하고잇지만 resp가 가리키는 변수 res의 값을 바꾸는 것도 가능하다. <br>
이처럼 주소를 반환하는 함수를 만들때는 주의할 것이 있다. <br><br>

##### 반환값의 자료형은 반환값을 저장할 포인터의 자료형과 같아야한다.
즉, sum 함수는 int형 변수인 res의 주소를 반환하므로 그 값을 저장할 포인터는 (int *resp;)와 같이 (int *)형으로 선언해야 하며 sum 함수의 반환형도 (int*) 형이 되어야 한다. <br>

##### 지역 변수의 주소를 반환해서는 안된다.
*sum 함수의 res는 static을 사용한 정적 지역 변수로 함수가 반환된 후에도 저장 공간이 계속 유지되므로 호출한 함수에서 포인터 연산을 통해 언제든지 그 변수를 사용할 수 있다.

```C
static int res;  // 정적 지역 변수
```
그러나 일반 지역 변수는 함수가 반환되면 저장 공간이 회수되어 언제 다른 용도로 재활용될지 알 수 없다. <br>
따라서 지역 변수의 주소를 반환하면 안된다.  <br>
이때 컴파일러는 이 경우 다음과 같은 경고 메세지로 알려준다. <br>
```C
waring C4172 : 지역 변수 또는 임시 변수의 주소를 반환하고 있습니다.
```

<br>

주소를 반환하여 쓸 수 있는 경우는 정적 지역 변수나 전역 변수의 주소를 반환하거나 호출하는 함수에 있는 변수의 주소를 인수로 받은 경우 그 주소를 다시 반환할 수 있다. 
그 외에도 동적 할당한 메모리의 주소도 가능한데, 동적 할당은 16장에서 자세히 다루도록 하겠다. <br>






