#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, i, j, k;											//�ݺ����� �� ���� ����

	printf("�ﰢ���� ���̴�?:");							
	scanf("%d", &a);

	for (i = 1; i <= a; i++)								//�ﰢ���� ����
	{
		for (j = 1; j <= (a - i) + 1; j++)					//�ﰢ�� ����
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)					//�ﰢ���� # ����
		{
			printf("#");
		}
		printf("\n");										//�ﰢ�� �ٹٲ�
	}
	
	return 0;
}