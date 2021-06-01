/*
	휘트니스 회원관리 프로그램
	신규회원 등록은 회원번호와 이름, 체중을 입력하고, heap 영역에 저장

	회원번호로 음수를 입력하면 입력이 종료되며, 총 회원 수, 평균 체중, 최고 체중을 갖는 회원 정보가 출력된다.

	scanf로 회원번호, 이름, 체중입력 한것을 heap 영역에 저장
	회원번호에 음수를 입력하면 총 회원수, 평균 체중, 최고 체중을 갖는 회원의 정보 출력

	구현 순서
	1. 구조체선언
	2. main에서 회원정보를 입력받고 입력받은 만큼의 메모리에 동적할당
	3. 회원번호에서 -1을 입력했을때 회원정보가 뜨도록 구현

	오류 제어
	1. 아무것도 입력안하고 회원번호에 음수를 눌렀을때 => 아무것도 입력안했다고 출력하고 종료
	2. 회원번호, 회원체중에 문자열을 입력했을때 => 숫자말고 딴거눌렀다고 출력하고 종료
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct      // 구조체 선언
{
	int num;
	char name[20];
	double weight;
} Fitness;


// 함수부
void total_number(int count);                     // 전체 등록 회원 수 반환
double average_weight(Fitness** pary, int count); // 평균 체중 반환
int max_weight(Fitness** pary, int count);        // 최대 체중 회원의 index 반환
void print_info(Fitness** pary, int index);       // 회원 정보 출력
void free_ary(Fitness** pary, int count);         // 동적 할당 영역 해제


int main()
{
	int count = 0;        // 지금 몇번째 회원인지 index 저장 변수
	Fitness* ary[100];    // 포인터 배열 선언

	for (int i = 0; i < sizeof(ary) / sizeof(Fitness*); i++) 
	{
		// 입력받을 임시 변수 선언
		int tempNum = 0;               
		char tempName[20] = { 0 };
		double tempWeight = 0.0;


		// 회원 정보 입력
		printf("회원 번호 입력(음수를 입력하면 종료) : ");
		scanf("%d", &tempNum);
		getchar();
		if (1 != tempNum)                  // 숫자말고 딴거 입력했을때 오류 제어
		{
			printf("(회원번호입력)문자를 입력하셨습니다. 종료합니다.\n");
			exit(1);
		}
		else if (tempNum < 0)
		{
			printf("음수를 입력하셨으니 종료합니다.\n");
			break;
		}

		
		printf("회원 이름 입력 : ");
		scanf("%s", tempName);
		getchar();

		printf("회원 체중 입력 : ");
		scanf("%lf", &tempWeight);
		getchar();

		if (1 != tempWeight)               // 숫자말고 딴거 입력했을때 오류 제어
		{
			printf("(회원체중입력)문자를 입력하셨습니다. 종료합니다.\n");
			exit(1);
		}

		// 입력받은 정보를 메모리에 동적할당
		ary[i] = (Fitness*)malloc(sizeof(Fitness));        
		if (ary[i] != NULL)
		{
			ary[i]->num = tempNum;
			strcpy(ary[i]->name, tempName);
			ary[i]->weight = tempWeight;
		}

		printf("\n");
		count++;
	}


	// 전체 몇명 등록됬는지 출력
	total_number(count);


	// 회원들의 평균 체중 반환
	double averagetemp = average_weight(ary, count);
	if (averagetemp != 0)     // averagetemp = 0 은 count가 0일때 반환하므로 회원정보가 없을때이다.
	{
		printf("\n-----------------평균체중 출력-----------------\n");
		printf("평균 체중 : %.2lf kg\n", averagetemp); // 모든 회원들의 평균체중을 반환받고 출력
		printf("-----------------------------------------------\n");
	}


	// 제일 무거운분의 정보 출력
	int max = max_weight(ary, count);
	
	if (max != 0)            // max = 0은 count가 0이므로 회원정보가 없을때이다.
	{
		printf("\n-------최대 체중을 가진 회원정보------\n");
		printf("번호 : %d\n", ary[max]->num);
		printf("이름 : %s\n", ary[max]->name);
		printf("체중 : %.2lf\n", ary[max]->weight);
		printf("--------------------------------------\n");
	}


	// 전체 회원들의 정보 출력
	print_info(ary, count);


	// 동적할당 해제
	free_ary(ary, count);
	
	return 0;
}


/// <summary>
/// 전체 등록 회원 수 출력 함수
/// </summary>
void total_number(int count)
{
	printf("\n-----------------전체 회원 수-------------------\n");
	printf("전체 회원 수는 %d명입니다.\n", count);  // 총 회원수는 count에 들어가있으니 count를 출력
	printf("------------------------------------------------\n");
}


/// <summary>
/// 회원들의 평균 체중 반환 함수
/// </summary>
double average_weight(Fitness** pary, int count)
{
	if (count == 0)
	{
		printf("(평균체중반환) 회원이 없습니다\n");
		return 0;
	}
	double avgtemp = 0;                  
	for (int i = 0; i < count; i++)
	{
		
		avgtemp += pary[i]->weight;           // 회원들의 체중을 다 더해줌
	}
	return (avgtemp/count);
}


/// <summary>
/// 최대 체중 회원의 정보반환(제일 무거운분이 등록정보에서 몇번째인지 검색하는 함수)
/// </summary>
int max_weight(Fitness** pary, int count)
{
	if (count == 0)
	{
		printf("(최대체중) 회원이 없습니다.");
		return 0;
	}
	int temp = 0;
	int max = pary[0]->weight;
	for (int i = 1; i < count; i++)
	{
		if (pary[i]->weight > max)
		{
			max = pary[i]->weight;
			temp = i;
		}
	}

	return temp;    // 제일 무거운분의 인덱스를 반환
}


/// <summary>
/// 회원 정보 출력
/// </summary>
void print_info(Fitness** pary, int index)
{
	// 1. scanf를 통해 입력받은 회원의 정보?
	// 2. 전체 회원의 수를 출력? => 채택

	printf("\n");

	if (index == 0)
	{
		printf("(회원정보) 회원이 없습니다.\n");
		return;
	}
	// 전체 등록된 회원 출력
	for (int i = 0; i < index; i++)
	{
		printf("-------------%d번 회원 정보-------------\n", i + 1);
		printf("번호 : %d\n", pary[i]->num);
		printf("이름 : %s\n", pary[i]->name);
		printf("체중 : %.2f\n", pary[i]->weight);
		printf("\n");
	}
}


/// <summary>
/// 동적 할당 영역 해제
/// </summary>
void free_ary(Fitness** pary, int count)
{
	if (count == 0) 
	{
		printf("(free영역) 해제할 메모리가 없습니다.\n");
		return;
	}
	printf("\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d번 회원 할당해제\n", i);
		free(pary[i]);
	}
}
