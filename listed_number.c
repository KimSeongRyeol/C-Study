#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	int i, j, l;									//for�� ���� ����� l���� ����

	for (j = 0; j <= 9; j++)						//��
	{
		for (i = 0; i <= 9; i++)					//��
		{
			l = j + (i * 10);						//���
			printf("%3d", l);						//���� �����ϸ� ��Ÿ����

			if (i == 9)
			{
				printf("\n");						//���� 9��° ���� �� �ٹٲ�
			}
		}
	}

	return 0;
}