#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void fill_array(double** pi, int pa, int pb);

void print_array(double** pi, int pa, int pb);

int main(void) {
  int a, b;
  double** pr;

  printf("Enter M, N: ");
  scanf("%d%d", &a, &b);
  pr = (double**)malloc(a * sizeof(double));

  for (int i = 0; i < b; i++) {
    pr[i] = (double*)malloc(b * sizeof(double));
  }
  fill_array(pr, a, b);
  print_array(pr, a, b);

  for (int i = 0; i < a; i++) {
    free(pr[i]);
  }
  free(pr);
}

void fill_array(double** pi, int pa, int pb) {
  for (int i = 1; i <= pa; i++) {
    for (int j = 1; j <= pb; j++) {
      pi[i - 1][j - 1] = i * j;
    }
  }
}

void print_array(double** pi, int pa, int pb) {

  printf("result :\n");
  for (int i = 0; i < pa; i++) {
    for (int j = 0; j < pb; j++) {
      printf("  %5.1lf", pi[i][j]);
    }
    printf("\n");
  }

}