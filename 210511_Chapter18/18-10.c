/*
a.txt 의 데이터
17 years old
SEO DW
*/

// fflush 함수
// 버퍼를 공유함으로 인해 발생하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE* fp;                      // 파일 포인터
	int age;                       // 나이 저장 변수
	char name[20];                 // 이름 저장 배열

	fp = fopen("a.txt", "r");      // 파일 개방

	fscanf(fp, "%d", &age);        // 나이 입력
	// fgets(name, sizeof(name), fp); // 이름 입력(fscanf로 인해 나이 입력후 개행문자가 fgets에 바로 입력된다)
	                                  // fgets는 띄어쓰기까지 저장됨
	
	// fscanf(fp, "%s", name);        // fscanf의 특성상 띄어쓰기까지만 저장되서 SEO 까지만 출력된다.

	while (fgetc(fp) != '\n');        // 따라서 fgetc 함수의 반환값이 개행 문자가 아닌 동안 반복해서 전부 출력한다.      
									  // getchar()로 개행을 날리는것처럼 개행을 제거해주는 느낌이라 생각하면됨.
									  // NULL문자가 아니면 계속 머물러있음.
									  // {}대신 ;를써도됨
	fgets(name, sizeof(name), fp);

	printf("나이 : %d, 이름 : %s", age, name);  // 입력 데이터 출력
	fclose(fp);                    // 파일 닫음

	return 0;
}