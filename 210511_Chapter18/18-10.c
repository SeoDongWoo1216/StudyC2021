/*
a.txt �� ������
17 years old
SEO DW
*/

// fflush �Լ�
// ���۸� ���������� ���� �߻��ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	FILE* fp;                      // ���� ������
	int age;                       // ���� ���� ����
	char name[20];                 // �̸� ���� �迭

	fp = fopen("a.txt", "r");      // ���� ����

	fscanf(fp, "%d", &age);        // ���� �Է�
	// fgets(name, sizeof(name), fp); // �̸� �Է�(fscanf�� ���� ���� �Է��� ���๮�ڰ� fgets�� �ٷ� �Էµȴ�)
	                                  // fgets�� ������� �����
	
	// fscanf(fp, "%s", name);        // fscanf�� Ư���� ��������� ����Ǽ� SEO ������ ��µȴ�.

	while (fgetc(fp) != '\n');        // ���� fgetc �Լ��� ��ȯ���� ���� ���ڰ� �ƴ� ���� �ݺ��ؼ� ���� ����Ѵ�.      
									  // getchar()�� ������ �����°�ó�� ������ �������ִ� �����̶� �����ϸ��.
									  // NULL���ڰ� �ƴϸ� ��� �ӹ�������.
									  // {}��� ;���ᵵ��
	fgets(name, sizeof(name), fp);

	printf("���� : %d, �̸� : %s", age, name);  // �Է� ������ ���
	fclose(fp);                    // ���� ����

	return 0;
}