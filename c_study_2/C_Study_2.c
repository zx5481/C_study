#include <stdio.h>

void main() {

	/*int b = 20;
	b = b + 1;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);*/






	int start = 0;
	printf("피라미드를 쌓아라. (시작: 1, 종료: 0)\n");
	scanf_s("%d", &start);

	if(start == 1) {
		int layer = 0;

		printf("몇 층으로 쌓겠느냐?\n");
		scanf_s("%d", &layer);

		if(5 > layer || layer > 50) {
			printf("범위 내에 층을 이야기하거라.\n");
		}
		else {
			printf("%d 층\n", layer);
			for (int i = 0; i < layer; i++) {
				for (int k = 0; k < i + 1; k++) {
					printf("*");
				}
				printf("\n");
			}
		}
	}
}