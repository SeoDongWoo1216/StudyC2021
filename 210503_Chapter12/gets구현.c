// ���� �����غ��� gets �Լ�

#include<stdio.h>

int main() 
{
	int i = 0;		      // �迭 ��� ÷�� ����
	char str[20];         // ���ڿ��� �迭�� ����
	char ch;			  // �Է��� ���ڸ� �޾Ƶ� �ӽ� ����

	do 
	{
		ch = getchar();   // ���� �ϳ� �Է�
		str[i] = ch;      // �迭�� ����
		i++;              // ÷�� ����
	} 
	while (ch != '\n');   // �Է��� ���ڰ� �����̸� ����

	str[i] = '\0';        // ���� ���ڰ� �Էµ� ��ġ�� NULL���� ����
	printf("%s", str);
	return 0;
	
}