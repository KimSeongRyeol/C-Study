#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	int i, j, l;									//for문 변수 선언과 l변수 선언

	for (j = 0; j <= 9; j++)						//열
	{
		for (i = 0; i <= 9; i++)					//행
		{
			l = j + (i * 10);						//계산
			printf("%3d", l);						//숫자 정리하며 나타내기

			if (i == 9)
			{
				printf("\n");						//행이 9번째 왔을 때 줄바꿈
			}
		}
	}

	return 0;
}