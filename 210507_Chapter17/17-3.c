// �ٸ� ����ü�� ����� ���� ����ü ���

#include <stdio.h>

struct profile				// �Ż�� ����ü ����
{
	int age;				// ����
	double height;			// Ű
};

struct student 
{
	struct profile pf;		// profile ����ü�� ����λ��
							// profile ����ü�� ã�⶧���� profile ����ü�� ���� �����ؾ���.
	int id;					// �й��� ������ ���
	double grade;			// ������ ������ ���
};

int main() 
{
	struct student a;						// student ����ü ���� ����

	a.pf.age = 17;							// pf ����� age ����� ���� ����
	a.pf.height = 164.5;					// pf ����� height ����� Ű ����
	a.id = 315;
	a.grade = 4.3;

	printf("���� : %d\n", a.pf.age);		// pf ����� age��� ���
	printf("Ű : %.1lf\n", a.pf.height);	// pf ����� height ��� ���
	printf("�й� : %d\n", a.id);			// id ��� ���
	printf("���� : %.1lf\n", a.grade);		// grade ��� ���

	return 0;
}