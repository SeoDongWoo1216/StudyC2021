#include<stdio.h>

int main() {
	int rank = 2, m = 0;

	switch (rank)    // rank의 값이 얼마인지 확인
	{   
	case 1:          // rank가 1이면
		m = 300;     // m = 300
		break;       
	case 2:          // rank가 2면
		m = 200;     // m = 200
		break;
	case 3:          // rank가 3이면
		m = 100;     // m = 100
		break;
	default:         // rank와 일치하는 case의 값이 없으면
		m = 10;      // m = 10
		break;
	// default 는 생략가능.	
    // break;는 이 조건문을 빠져나간다는 의미이다.
	}
	printf("m : %d \n", m);
}