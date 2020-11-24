#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct profile {
  char name[20];
  double grade;
  int english;
};

void input_data(struct profile* lp);
void elite(struct profile* lp);

int main(void) {
  struct profile new_staff[5];

  input_data(new_staff);
  elite(new_staff);

  return 0;
}

void input_data(struct profile *lp) {
  printf("이름, 학점, 영어점수를 입력하세요. \n");
  for (int i = 0; i < 5; i++) {
    scanf("%s%lf%d", &lp[i].name, &lp[i].grade, &lp[i].english);
  }
}

void elite(struct profile* lp) {
  printf(" ------- elite 사원 명단 -------");
  for (int i = 0; i < 5; i++) {
    if ((lp[i].grade >= 4.0) && (lp[i].english >= 900)) {
      printf("\n%s, %.1lf, %d", lp[i].name, lp[i].grade, lp[i].english);
    }
  }
}