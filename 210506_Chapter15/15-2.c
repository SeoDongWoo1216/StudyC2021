// �Լ��� ����ϴ� ����
// 1. ����
// 2 . ������


// ���������͸� ����� ������ ��ȯ(Swap �Լ������ؼ� �� ���ڿ��� �ٲٴ¿���)
#include <stdio.h>

void Swap_ptr(char**, char**);

int main() 
{
	char* pa = "success";                    // ������ ������ ����� ģ����
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);  // �ٲٱ� ��
	Swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);  // �ٲ� ��

	return 0;
}


// �� ���ڿ� ��ȯ�ϴ� �Լ�
// ������ �����ͷ� �޴°Ϳ� �ָ����ڡ�
void Swap_ptr(char** ppa, char** ppb) 
{
	char* pt;      // tempó�� �ӽ� ����

	pt = *ppa;     // pt = pa;
	*ppa = *ppb;   // pa = pb;
	*ppb = pt;     // pb = pt;
}
