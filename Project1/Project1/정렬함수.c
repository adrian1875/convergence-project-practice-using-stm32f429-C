#if 0
#include <stdio.h>
#define NUM (3)

typedef struct TEST {
	int t1;
	char t2[10];
	float t3;
}test;

void sort(test* a)
{
	int i, j;
	test temp;

	for (i = 0; i < NUM - 1; i++) {
		for (j = 0; j < NUM - i - 1; j++) {
			if (a[i].t3 < a[i + 1].t3) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}



int main(void)
{
	int i;
	test num[NUM] = { {123 ,"aaa",10.1},{123 ,"sss",140.9} ,{123 ,"ddd",14.3} };

	sort(num);

	for (i = 0; i < NUM; i++) {
		printf("%d, %s, %f\n", num[i].t1, num[i].t2, num[i].t3);
	}
	return 0;
}
#endif
