#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
  int a, b;
  
  scanf("%d%d", &a, &b);

  for (int i = 1; i <= 9; i++) {
    printf("%dx%d=%d ", a, i, a * i);
    if (a * i < 10) {
      printf("   %dx%d=%d\n", b, i, b * i);
    }
    else {
      printf("  %dx%d=%d\n", b, i, b * i);
    }
  }

  return 0;
}