extern int count;      // 19-9_main.c�� ���� ���� count ����
extern int total;      // 19-9_input.c�� ���� ���� total ����(main.c���� staticó���߱⶧��)

double average(void) 
{
	return total / (double)count;  // �Է°��� ��� ��ȯ
}