#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n);						//함수 선언

int main(void)
{
	int n, result;							//받는 값 n과 결과 값 result 변수 선언

	printf("양의 정수:");					//물어보기		
	scanf("%d", &n);						//팩토리얼을 계산할 값 받기

	result = factorial(n);					//계산된 팩토리얼 값 저장
	printf("팩토리얼 : %d", result);		//계산된 팩토리얼 값 나타내기

	return 0;
}

int factorial(int n)						//함수 정의
{
	if (n == 1) 
	{
		return	1;							//n값이 1일때 1반환
	}

	return n * factorial(n - 1);			//재귀함수로 팩토리얼계산후 반환
}
