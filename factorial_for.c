#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);

int main(void)
{
	int n, result;

	printf("양의 정수:");					//물어보기		
	scanf("%d", &n);						//팩토리얼을 계산할 값 받기

	result = factorial(n);
	printf("팩토리얼 : %d", result);					//팩토리얼 값 나타내기

	return 0;
}

int factorial(int n)
{
	int cal = 1;
	int i, l;

	l = n;									//게산을 위해 l=n 값 두기

	for (i = 1; i < n; i++)					//받은 값 만큼 반복
	{
		cal *= l;						//팩토리얼 계산
		l -= 1;								//받은 값이 계속 1씩 줄으며 계산
	}
	return cal;
}