#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
	int number; // ���� ��ȣ
	int seats; // �¼� ��
	Train* next;  //���� ����Ʈ
};

void print_train(Train* tp); //���� ��ȣ�� �¼����� ����ϴ� �Լ�����

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	int train_seats[5] = { 20, 40, 40, 40, 30 }; // ������ �¼��� ����

	for (i = 0; i < 5; i++) {
		if (head == NULL) {
			head = tail = (Train*)malloc(sizeof(Train));
			if (head == NULL) {
				printf("�޸𸮰� �����մϴ�!!\n");
				exit(1);
			}
			head->number = i + 1;
			head->seats = train_seats[i];
		}
		else {
			tail->next = (Train*)malloc(sizeof(Train));
			if (tail->next == NULL) {
				printf("�޸𸮰� �����մϴ�!!\n");
				exit(1);
			}
			tail = tail->next;
			tail->number = i + 1;
			tail->seats = train_seats[i];
		}

	}
	print_train(head); // ���� ��ȣ�� �¼��� ���

	return 0;
}

void print_train(Train* tp) { //���� ��ȣ�� �¼����� ����ϴ� �Լ�
	for (int i = 0; i < 5; i++) {
		printf("[%d������, �¼���:%d] ", tp->number, tp->seats);
		tp = tp->next;
	}
}