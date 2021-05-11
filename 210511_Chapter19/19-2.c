/*
매크로명을 만드는 #define
#define은 매크로명을 정의하는 전처시 지시자로 매크로명은 다른 변수명과 쉽게 구분하기쉽게 대문자로사용한다.
치환될 부분은 매크로명과 하나 이상의 빈칸을 둔다.

전처리 시켜놨더라도 바꾸기전이나 바꾼후를 써도 상관은없다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159          // 상수를 매크로명으로 정의
#define LIMIT 100.0         // 상수를 매크로명으로 정의
#define MSG "passed!"       // 문자열을 매크로명으로 정의
#define ERR_PRN printf("허용 범위를 벗어났습니다!"); // 출력문을 매크로명으로 정의

int main() 
{
	double radius, area;                           // 반지름과 면적 변수

	printf("반지름을 입력하세요(5이하) : ");
	scanf("%lf", &radius);                         // 반지름 입력
	area = PI * radius * radius;                   // 면적 계산
	if (area > LIMIT)                              // 면적이 100을 초과하면 오류 메세지 출력
	{
		ERR_PRN;                     
	}
	else
	{
		printf("원의 면적 : %.2lf (%s)\n", area, MSG);   // 면적과 메시지 출력
	}
		
	return 0;
}