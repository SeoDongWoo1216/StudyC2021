## 2장. 상수와 데이터 출력

C는 main함수에서 출발한다.
```C
#include <stdio.h>
int main()         // 메인함수
{                  // 메인함수 시작

     return 0;     // 메인함수 종료(운영체제에게 종료하는것을 알려주는 구문)
}                  // 메인함수의 끝
```

#### 출력 함수 : printf("출력할꺼, 변환문자, 제어문자", 변수);

#### 변환문자
%d : 10진수 출력 <br>
%o : 8진수 출력 <br>
%x : 16진수 소문자 출력 <br>
%X : 16진수 대문자 출력<br>
%.1lf  : 소수점 첫재짜리까지 출력(둘째에서 반올림) <br>
%.10lf : 소수점 10자리까지 출력 <br>
%c : 문자 출력('')<br>
%s : 문자**열** 출력("")<br>

#### 제어문자(이스케이프 시퀀스) : 문자는 아니지만 출력방식에 영향을 주는 문자
\n : 개행(엔터처리) <br>
\t : 들여쓰기(Tab처리) <br>
\b : 백스페이스처리<br>
\r : 맨 앞으로 이동<br>
\a : 벨소리(alart) 호출<br><br>

### 퀴즈 
printf 출력으로 
내 이름은 OOO입니다, 내 키는 OOO이고, 몸무게는 OOO입니다.  를 출력해보자.
```C
#include <stdio.h>
int main() 
{
	printf("내 이름은 %s입니다.\n", "서동우");
	printf("제 키는 %d cm이고, 몸무게는 %.1lf kg입니다.\n", 190, 200.1234);

	return 0;
}
```
![2장퀴즈결과화면](https://github.com/SeoDongWoo1216/StudyC2021/blob/main/210427_Chapter2/result_Image/2_test.PNG)


