#include <stdio.h>

int main(void) {
  int jumsu[3][3] = { {10, 20, 30}, {30, 24, 10}, {30, 60, 90} };
  int kor, eng, math, stu, stu1, high = 0, high1 = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (jumsu[j][i] > high) {
        high = jumsu[j][i];
        stu = j + 1;
      }
      else if (jumsu[j][i] == high) {
        high1 = jumsu[j][i];
        stu1 = j + 1;
      }
      if (i == 0 && j == 2) {
        if (high == high1) {
          printf("국어 최고 점수 : %d번과 %d번학생 %d점\n", stu, stu1, high);
        }
        else {
          printf("국어 최고 점수 : %d번 학생 %d점\n", stu, high);
        }
      }
      else if (i == 1 && j == 2) {
        if (high == high1) {
          printf("영어 최고 점수 : %d번과 %d번학생 %d점\n", stu, stu1, high);
        }
        else {
          printf("영어 최고 점수 : %d번 학생 %d점\n", stu, high);
        }
      }
      else if (i == 2 && j == 2) {
        if (high == high1) {
          printf("수학 최고 점수 : %d번과 %d번학생 %d점\n", stu, stu1, high);
        }
        else {
          printf("수학 최고 점수 : %d번 학생 %d점\n", stu, high);
        }
      }
    }
  }

  return 0;
}
