extern int count;      // 19-9_main.c의 전역 변수 count 공유
extern int total;      // 19-9_input.c의 전역 변수 total 공유(main.c에는 static처리했기때문)

double average(void) 
{
	return total / (double)count;  // 입력값의 평균 반환
}