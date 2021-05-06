/*
	
	

*/

#include <stdio.h>

int main() 
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);
	printf("====================================\n");

	int iAry1[2] = { 1, 2 };
	// int* piAry1 = Ary1;			
	int (*piAry1) = iAry1;						// 위의 코드와 같음(가독성을위해 ()를 해주는게 좋음)
	printf("int형 1차원 배열\n");
	printf("%p %p\n", iAry1, piAry1);           // 주소가 같으므로 포인터연산이 배열에도 적용됨
	printf("%p %p\n", iAry1 + 1, piAry1 + 1);	// int형이므로 + 4가 됨
	printf("====================================\n");

	char cAry2[2] = { 'A', 'B' };
	char* pcAry2 = cAry2;
	printf("char형 1차원 배열\n");
	printf("%p %p\n", cAry2, pcAry2);
	printf("%p %p\n", cAry2 + 1, pcAry2 + 1);   // char형이므로 + 1이 됨
	printf("====================================\n");

	int iAry3[][2] = { {1, 2}, {3, 4} };		// 2차원 배열일때
	//int* piAry3 = iAry3;
	//printf("%p %p\n", iAry3, piAry3);			// 시작 주소값은 같은데
	//printf("%p %p\n", iAry3 + 1, piAry3 + 1); // 포인터 연산했을때의 결과는 다르다.

	int (*piAry3)[2] = iAry3;					// int형의 +2 만큼 점프할 수 있도록해줌
	printf("int형 2차원 배열\n");
	printf("%p %p\n", iAry3, piAry3);		    // 시작 주소값은 같은데
	printf("%p %p\n", iAry3 + 1, piAry3 + 1);	// 포인터 연산했을때 같은 결과 출력									
	printf("====================================\n");

	char *cAry4[2] = {"hi", "good"};            // 포인터 배열(1차원 배열이지만 포인터가있으므로)
	//char *pcAry4 = cAry4;					    // 포인터 1번만쓰면 포인터연산 후 주소가 다르게 출력됨
	char** pcAry4 = cAry4;					    // 포인터 배열이므로 2중포인터를 사용해야함
	printf("char형 2차원 배열\n");
	printf("%p %p\n", cAry4, pcAry4);
	printf("%p %p\n", cAry4 + 1, pcAry4 + 1);   // (2중포인터일때)주소가 동일하게 출력

	return 0;
}