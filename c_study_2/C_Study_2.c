#include <stdio.h>

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
				for (int k = 0; k < i + 1; k++) {
					printf("*");
				}
				printf("\n");
			}
		}
	}
}