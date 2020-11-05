#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, i, j, k;											//반복문에 쓸 변수 선언

	printf("삼각형의 높이는?:");							
	scanf("%d", &a);

	for (i = 1; i <= a; i++)								//삼각형의 높이
	{
		for (j = 1; j <= (a - i) + 1; j++)					//삼각형 정렬
		{
			printf(" ");
		}
		for (k = 1; k <= 2 * i - 1; k++)					//삼각형의 # 개수
		{
			printf("#");
		}
		printf("\n");										//삼각형 줄바꿈
	}
	
	return 0;
}