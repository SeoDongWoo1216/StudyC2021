#include<stdio.h>

void print_char(char ch, int count); // 함수 선언

int main() 
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int count) 
{
	int i;
	for (i = 0; i < count; i++) 
	{
		printf("%c", ch);
	}
	// return;
}