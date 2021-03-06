/*
	대 소문자 구분없이 알파벳을 입력하면 대 소문자를 판별하여 분류하고, 사전 순으로 정렬하여 출력하는 프로그램

	1. 입력받을 배열 : input_ary
	2. 배열의 크기는 10
	3. 정렬 알고리즘은 삽입정렬을 사용
	4. 삽입정렬 알고리즘은 함수로 구현
	5. 소문자 저장 배열이름은 lower_ary
	   대문자 저장 배열이름은 upper_ary

	- 연결리스트를 사용할 경우
	1. 입력받을 배열의 이름은 input_ary
	2. 배열의 크기는 10으로 정함
	3. 정렬알고리즘은 삽입정렬 사용
*/

/*
	구현 순서

	1. 문자열을 배열로 입력받음
	2. 각각 받은 배열들이 대소문자인지 구별(이때 대문자배열, 소문자배열에 저장)
	3. 각각 배열을 삽입정렬로 정렬
	4. 출력


	오류 목록
	1. 알파벳말고 딴거로만 채웠을때 => 알파벳 입력안했다고 출력하고 종료
	2. 중복? => 일단 중복된채로 알파벳 정렬
	3. 알파벳과 다른게 섞였을때 => 다른거 빼고 알파벳만 정렬해서 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertSort(char*, int);  // 삽입 정렬 함수
void print_ary(char*, int, int);             // 배열 출력 함수

int main() 
{
	int i = 0;          // for문에 쓸 인덱스
	int j = 0;          // 대문자 정렬 개수 카운트
	int k = 0;          // 소문자 정렬 개수 카운트

	int lowerFlag = 0;  // 배열 존재여부 플래그
	int upperFlag = 0;
	
	char ary[10];       // 알파벳을 입력받을 배열
	char lower_ary[10]; // 소문자 배열
	char upper_ary[10]; // 대문자 배열


	printf("알파벳 입력 : ");


	// 알파벳 입력 후 대소문자 구별
	for (i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) 
	{
		scanf(" %c", &ary[i]);                  // 한칸 띄워서해야 배열요소에 딱맞는 개수가 입력됨
		if (ary[i] >= 'A' && ary[i] <= 'Z') 
		{
			upperFlag = 1;
			printf("%d번째수는 대문자\n", i);
			upper_ary[j] = ary[i];
			j++;
		}

		if (ary[i] >= 'a' && ary[i] <= 'z') 
		{
			lowerFlag = 1;
			printf("%d번째수는 소문자\n", i);
			lower_ary[k] = ary[i];
			k++;
		}
	}

	if (lowerFlag == 0 && upperFlag == 0) // 알파벳말고 딴거로만 10개를 채우면 종료
	{
		printf("\n알파벳을 입력하지 않으셨습니다. 종료합니다.\n");
		exit(1);
	}

	// 소문자 배열의 삽입정렬
	insertSort(lower_ary, k);


	// 대문자 배열의 삽입정렬
	insertSort(upper_ary, j);


	// 배열 출력
	printf("\n\n-----------대문자----------\n");
	print_ary(upper_ary, j, upperFlag);

	printf("\n\n-----------소문자----------\n");
	print_ary(lower_ary, k, lowerFlag);
	printf("\n");

	return 0;
}


/// <summary>
/// 알파벳 삽입 정렬 함수
/// </summary>
void insertSort(char* cAry, int count) 
{
	for (int i = 1; i < count; i++)
	{
		for (int x = 0; x < i; x++)
		{
			if (cAry[x] > cAry[i])
			{
				char temp;
				temp = cAry[x];
				cAry[x] = cAry[i];
				cAry[i] = temp;
			}
		}
	}
}


/// <summary>
/// 배열 출력 함수
/// </summary>
void print_ary(char *cAry, int count, int Flag) 
{
	if (Flag == 0)  // 매개변수로 받은 배열의 요소가 없으면 없다고 출력하고 함수 반환
	{
		printf("배열이 존재하지 않습니다.\n");
		return;
	}

	for (int i = 0; i < count; i++)
	{
		
		printf("%c ", cAry[i]);
	}
}