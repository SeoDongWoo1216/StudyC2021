/*
fread와 fwrite 함수는 입출력할 데이터의 크기와 개수를 인수로 줄 수 있으므로 
구조체나 배열과 같이 데이터의 양이 많은 경우도 파일에 쉽게 입출력할 수 있다.

숫자와 문자 사이의 변환과정을 수행하지 않으므로 입출력 효율을 높일 수 있다.
그러나 파일의 내용을 메모장 같은 편집기로 직접 확인할 수는 없다.

fwrite(&num, sizeof(num), 1, bfp);
&num        : 출력할 데이터의 주소
sizeof(num) : 크기
1           : 개수
bfp         : 파일 포인터

fwrite 함수는 첫번째 인수로 주어진 메모리 위치로 가서 크기와 개수를 고합 바이트 수를 읽어 파일 포인터의 파일에 출력한다.
만약 배열 데이터를 출력하면 두번째인수로 배열 요소의 크기를 주고, 세번째 인수로는 배열 요소의 수를 줄 수 있다.

fwrite의 반환값은 출력한 데이터의 수가 된다.
출력한 데이터의 크기를 확인하고 싶을때는 두번째인수로 1을주고, 세번째인수로 전체 데이터 크기를 주면된다.
*/

// fread와 fwrite 함수의 차이
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE* afp, * bfp; 
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt");         // 텍스트 모드로 출력 파일 개방
	fprintf(afp, "%d", num);            // num의 값을 문자로 변환하여 출력

	bfp = fopen("b.txt", "wb");         // 바이너리 모드로 출력 파일 개방
	fwrite(&num, sizeof(num), 1, bfp);  // num의 값을 그대로 파일에 출력

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");         // 바이너리 모드로 입력 파일 개방
	fread(&res, sizeof(res), 1, bfp);   // 파일의 데이터를 그대로 변수에 입력
	printf("%d", res);                  // 입력한 데이터 확인

	fclose(bfp);

	return 0;
}