#include<stdio.h>

int main() {
	int rank = 2, m = 0;

	switch (rank)    // rank�� ���� ������ Ȯ��
	{   
	case 1:          // rank�� 1�̸�
		m = 300;     // m = 300
		break;       
	case 2:          // rank�� 2��
		m = 200;     // m = 200
		break;
	case 3:          // rank�� 3�̸�
		m = 100;     // m = 100
		break;
	default:         // rank�� ��ġ�ϴ� case�� ���� ������
		m = 10;      // m = 10
		break;
	// default �� ��������.	
    // break;�� �� ���ǹ��� ���������ٴ� �ǹ��̴�.
	}
	printf("m : %d \n", m);
}