#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char* type, void* ap, void* bp);

int main(void) {
    int age1, age2;
    double weight1, weight2;

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d%lf", &age1, &weight1);

    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d%lf", &age2, &weight2);

    swap("int", &age1, &age2); 
    swap("double", &weight1, &weight2); 

    printf("첫 번째 사람의 나이와 키 : %4d%6.1lf\n", age1, weight1);
    printf("두 번째 사람의 나이와 키 : %4d%6.1lf", age2, weight2);

    return 0;
}

void swap(char* type, void* ap, void* bp) {
    int intTemp;
    double doubleTemp;

    if (type == "int") {
        intTemp = *(int*)ap;
        *(int*)ap = *(int*)bp;
        *(int*)bp = intTemp;
    }
    else if (type == "double") {     
        doubleTemp = *(double*)ap;
        *(double*)ap = *(double*)bp;
        *(double*)bp = doubleTemp;
    }
}