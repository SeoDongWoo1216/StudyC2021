/*
����ü ������ ���� ������ �����ϹǷ� �Լ��� �μ��� �ְų� �Լ����� �������� ���� ����ü�� ���� ���ÿ� ��ȯ�ϴ� ���� �����ϴ�.
���� ��� �� ������ ���� �ٲٴ� �Լ��� �����Ͱ� �ʿ��ϴ�.

�׷��� ����ü ������ ����� ���� �ְ� ������ ������ ���̵� �� ������ ���� �ٲٴ� �Լ��� ���� �� �ִ�.
*/

// ����ü�� ��ȯ�Ͽ� �� ������ �� ��ȯ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct vision 
{
	double left;	// ���� ��
	double right;	// ������ ��
};

struct vision exchange(struct vision robot);			// �� �÷��� �ٲٴ� �Լ�(vision�� ����üŸ��)

int main() 
{
	struct vision robot;								// ����ü ���� ����

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));		// �÷� �Է�
	robot = exchange(robot);							// ��ȯ �Լ� ȣ��
	printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)			// ����ü�� ��ȯ�ϴ� �Լ�
{
	double temp;									// ��ȯ�� ���� �ӽ� ����

	temp = robot.left;								// �¿� �÷� ��ȯ
	robot.left = robot.right;
	robot.right = temp;

	return robot;									// ����ü ���� ��ȯ(return�� 1���� ����)
}