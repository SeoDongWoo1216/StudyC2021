/*
getchar 함수는 내부적으로 stdin을 사용하므로 표준 입력 스트림 파일의 버퍼를 통해 입력한다.
따라서 getchar함수가 처음 호출되면 키보드에서 입력하는 데이터는 개행 문자와함께 stdin 스트림 파일의 버퍼에 한꺼번에 저장된다.
*/

// 18-4 표준 입출력 스트림을 사용한 문자열 입력 : getchar, putchar 사용
// 18-5 stdin과 stdout을 사용한 문자 입출력
#include <stdio.h>

int main() 
{
	int ch;              // 입력한 문자를 저장할 변수

	while (1) 
	{
		//ch = getchar();  // 키보드에서 문자 입력
		ch = fgetc(stdin);

		if (ch == EOF)   // 컨트롤 + Z 로 입력 종료
		{
			break;
		}
		
		putchar(ch);     // 화면에 문자 출력
		fputc(ch, stdout);
	}
	return 0;
}