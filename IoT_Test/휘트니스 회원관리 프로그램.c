/*
신규회원 등록은 회원번호와 이름, 체중을 입력하고, heap 영역에 저장

회원번호로 음수를 입력하면 입력이 종료되며, 총 회원 수, 평균 체중, 최고 체중을 갖는 회원 정보가 출력된다.

scanf로 회원번호, 이름, 체중입력 한것을 heap 영역에 저장
음수를 입력하면 총 회원수, 평균 체중, 최고 체중을 갖는 회원의 정보 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int num;
	char name[20];
	double weight;
} Fitness;

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
		ary[i] = (Fitness*)malloc(sizeof(Fitness));    // 정보를 입력할때 동적할당

		if (ary == NULL)
		{
			printf("메모리 할당 실패\n");
			break;
		}

		printf("회원번호 입력(음수입력하면 종료) : ");
		scanf("%d", &ary[i]->num);
		if (ary[i]->num < 0)               // 음수 입력했을때 종료
		{
			break;
		}
		
		printf("이름입력 : ");
		char* tempName[20];
		scanf(" %s", ary[i]->name);        // 이름은 안들어가서 임시로 만든다음에 strcpy로 넣었음
		strcpy(tempName, ary[i]->name);

		printf("체중입력 : ");
		scanf("%lf", &ary[i]->weight);

		count++;                          // 입력이 끝났으니 index++ 해줌

		int Restart = 0;                 
		printf("또 입력하시겠습니까?(자연수 : 예, 음수 : 아니오) : ");   // 또 입력할지 물어봄
		scanf("%d", &Restart);
		if (Restart < 0)
		{
			break;
		}
		printf("\n\n");
	}

	
	// 전체 몇명 등록됬는지 출력
	total_number(count);


	// 회원들의 평균 체중 반환
	double averagetemp = average_weight(ary, count);
	printf("\n\n평균 체중 : %.2lf kg\n", averagetemp / count); // 모든 회원들의 체중을 반환받고 count를 나눠줘서 출력


	// 제일 무거운분의 정보 출력
	int max = max_weight(ary, count);
	printf("\n-------최대 체중을 가진 회원정보------\n");
	printf("번호 : %d\n", ary[max]->num);
	printf("이름 : %s\n", ary[max]->name);
	printf("체중 : %.2lf\n", ary[max]->weight);
	printf("--------------------------------------\n");


	// 전체 회원들의 정보 출력
	print_info(ary, count);


	// 동적할당 해제
	free_ary(ary, count);
	//printf("여기까지 오류없으면 정상적으로 출력된듯\n");
	
	return 0;
}


/// <summary>
/// 전체 등록 회원 수 출력 함수
/// </summary>
void total_number(int count)
{
	printf("\n\n\n전체 회원 수는 %d명입니다.\n", count);  // 총 회원수는 count에 들어가있으니 count를 출력
}


/// <summary>
/// 회원들의 평균 체중 반환 함수(정확히는 모든 회원의 체중을 합해서 반환)
/// </summary>
double average_weight(Fitness** pary, int count)
{
	double avgtemp = 0;                  
	for (int i = 0; i < count; i++)
	{
		if (pary == NULL)
		{
			printf("저장된 메모리가 없습니다\n");
			break;
		}
		avgtemp += pary[i]->weight;       // 
	}
	//printf("(함수안에서)평균 체중 : %.2lf kg\n", avgtemp / count);
	return avgtemp;
}


/// <summary>
/// 최대 체중 회원의 정보반환(제일 무거운분이 등록정보에서 몇번째인지 검색하는 함수)
/// </summary>
int max_weight(Fitness** pary, int count)
{
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
	//printf("이름 : %s\n", pary[temp]->name);
	//printf("번호 : %d\n", pary[temp]->num);
	//printf("체중 : %.2lf\n\n", pary[temp]->weight);

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
	printf("\n");
	for (int i = 0; i < count; i++)
	{
		printf("%d번 회원 할당해제\n", i);
		free(pary[i]);
	}
}
