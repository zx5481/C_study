#include <stdio.h>

void blank(int floor) {
	for (int k = 0; k < floor; k++) {
		printf(" ");
	}
}

void main() {

	/*int b = 20;
	b = b + 1;
	printf("b�� %d\n", ++b);
	printf("b�� %d\n", b++);
	printf("b�� %d\n", b);*/

	int start = 0;
	printf("�Ƕ�̵带 �׾ƶ�. (����: 1, ����: 0)\n");
	scanf_s("%d", &start);

	if(start == 1) {
		int layer = 0;

		printf("�� ������ �װڴ���?\n");
		scanf_s("%d", &layer);

		if(5 > layer || layer > 50) {
			printf("���� ���� ���� �̾߱��ϰŶ�.\n");
		}
		else {
			printf("%d ��\n", layer);
			for (int i = 0; i < layer; i++) {
				blank(layer - i);
				for (int j = 0; j < 2*i + 1; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
	}
}