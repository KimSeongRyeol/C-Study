#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
	int number; // 객차 번호
	int seats; // 좌석 수
	Train* next;  //연결 리스트
};

void print_train(Train* tp); //객차 번호와 좌석수를 출력하는 함수원형

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	int train_seats[5] = { 20, 40, 40, 40, 30 }; // 객차별 좌석수 정보

	for (i = 0; i < 5; i++) {
		if (head == NULL) {
			head = tail = (Train*)malloc(sizeof(Train));
			if (head == NULL) {
				printf("메모리가 부족합니다!!\n");
				exit(1);
			}
			head->number = i + 1;
			head->seats = train_seats[i];
		}
		else {
			tail->next = (Train*)malloc(sizeof(Train));
			if (tail->next == NULL) {
				printf("메모리가 부족합니다!!\n");
				exit(1);
			}
			tail = tail->next;
			tail->number = i + 1;
			tail->seats = train_seats[i];
		}

	}
	print_train(head); // 객차 번호와 좌석수 출력

	return 0;
}

void print_train(Train* tp) { //객차 번호와 좌석수를 출력하는 함수
	for (int i = 0; i < 5; i++) {
		printf("[%d번객차, 좌석수:%d] ", tp->number, tp->seats);
		tp = tp->next;
	}
}