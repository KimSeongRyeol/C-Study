#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void)
{
	int n, result;

	printf("���� ����:");					//�����		
	scanf("%d", &n);						//���丮���� ����� �� �ޱ�

	result = factorial(n);
	printf("���丮�� : %d", result);					//���丮�� �� ��Ÿ����

	return 0;
}

int factorial(int n)
{
	int cal = 1;
	int i, l;

	l = n;									//�Ի��� ���� l=n �� �α�

	for (i = 1; i < n; i++)					//���� �� ��ŭ �ݺ�
	{
		cal *= l;						//���丮�� ���
		l -= 1;								//���� ���� ��� 1�� ������ ���
	}
	return cal;
}