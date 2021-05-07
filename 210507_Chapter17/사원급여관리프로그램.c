/*
	5명의 사원아이디, 사원이름, 한달 급여를 입력받아 출력한 뒤
	5명 사원의 급여 총액과 평균 급여액을 구하시오.
	(이름은 동적할당에 저장)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct emplayee		// typedef를 통해 struct employee a 를 Employee a 로 바꿔서 사용할 수 있음
{
	int id;					// 사원번호
	char* name;				// 사원이름
	int salary;				// 급여
}Employee;

int main() 
{
	Employee a[5] = {0};
	int i = 0;	
	char str[100];
	
	int temp = 0;
	double avg = 0;
	
	for (i = 0; i < 5; i++) 
	{
		printf("사원번호 : ");
		scanf("%d", &a[i].id);

		printf("사원이름 : ");
		scanf("%s", str);
		a[i].name = (char*)malloc(strlen(str) + 1);   // ★ 받은 문자열만큼 동적할당 ★
													  // malloc을통해 str 문자열 길이만큼의 시작 주소를 a[i].name에 저장
		if(a[i].name != NULL) strcpy(a[i].name, str);
		
		printf("한달급여 : ");
		scanf("%d", &a[i].salary);
		printf("\n");

	}
	
	for (i = 0; i < 5; i++) 
	{
		printf("------------%d번 사원------------\n", i);
		printf("%d\n", a[i].id);
		printf("%s\n", a[i].name);
		printf("%d\n", a[i].salary);
		temp += a[i].salary;
	}

	avg = temp / 5;
	printf("--------------------------------\n\n");
	printf("==========================================\n");
	printf("급여 총액 : %d\n", temp);
	printf("급여 평균 : %.2lf\n", avg);
	printf("==========================================\n");

	for (i = 0; i < 5; i++)
	{
		free(a[i].name); //반환(해제)
	}
	return 0;
}