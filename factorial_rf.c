#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);						//�Լ� ����

int main(void)
{
	int n, result;							//�޴� �� n�� ��� �� result ���� ����

	printf("���� ����:");					//�����		
	scanf("%d", &n);						//���丮���� ����� �� �ޱ�

	result = factorial(n);					//���� ���丮�� �� ����
	printf("���丮�� : %d", result);		//���� ���丮�� �� ��Ÿ����

	return 0;
}

int factorial(int n)						//�Լ� ����
{
	if (n == 1) 
	{
		return	1;							//n���� 1�϶� 1��ȯ
	}

	return n * factorial(n - 1);			//����Լ��� ���丮������ ��ȯ
}
