/*
���ڿ��� ����ϴ� puts, fputs �Լ�
puts �Լ� ����  => int puts(const char *str)  // ���ڿ��� ����ϰ� �ڵ����� �� �ٲ�
fputs �Լ� ���� => int fputs(const char *str, FILE *stream);  // ���ڿ��� ����ϰ� �� �ٲ��� ����
 
const�� ���� ����?
put�� ����� ����� �������ִ�.(�迭�� ���� �ǵ帮������)
�ٵ� ��¸��ؾ��ϴµ� ����ڰ� ���� ������ų�����ֱ⶧���� �� ���ɼ��� �ƿ� �����ع��������� const Ű���带 ����Ѵ�. (���� �״�θ� ����϶�¶�)
*/

#include<stdio.h>
int main() 
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);          // �ڵ��������ִ� ����Լ�
	fputs(ps, stdout);  // �����ɾ��� ����Լ�
	puts("milk");       

	return 0;
}

// 
