#include <stdio.h>
#define MAX (1)

typedef struct test_struct
{
	int num;
	char name[10];
	float mean;
}test_st;

int main(void)
{
	test_st st_arr[MAX] = { 0, };
	int i;
	FILE* test_file = fopen("test file.txt", "w");
	
	
	for (i = 0; i < MAX; ++i) {
		printf("%d�� �л��� �й��Է� ", i + 1);
		scanf("%d", &st_arr[i].num);

		printf("%d�� �л��� �̸��Է� ", i + 1);
		scanf("%s", st_arr[i].name);

		printf("%d�� �л��� ����Է� ", i + 1);	
		scanf("%f", &st_arr[i].mean);	
	}

	fprintf(test_file, "�й�  \t    �̸�  \t   ���\n");
	for (i = 0; i < MAX; ++i) {
		fprintf(test_file, "%06d  \t    %s  \t   %.2f\n", st_arr[i].num, st_arr[i].name, st_arr[i].mean);
	}

	fclose(test_file);
	return 0;
}

