#include<stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf("�Է°��� : %d\n", argc);
	for (i = 0; i < argc; i++) 
	{
		printf("%d��° �Էµ� �� : %s\n", i, argv[i]);
	}
	return 0;
}