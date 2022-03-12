#if 0
#include <stdio.h>
#define MAX (1)

typedef struct test_struct_out
{
	int num;
	char name[10];
	float mean;
}test_st_out;

int main(void)
{
	FILE* out_test = fopen("test file.txt", "r");
	test_st_out test_arr_out[MAX] = { 0, };
	char buffer[100] = { 0, };
	int i;

	fgets(buffer, sizeof(buffer), out_test);
	for (i = 0; i < MAX; i++) {
		fscanf(out_test, "%d %s %f", &test_arr_out[i].num, test_arr_out[i].name, &test_arr_out[i].mean);
	}

	printf("%s", buffer);

	for (i = 0; i < MAX; i++) {
		printf("%06d \t    %s  \t   %.2f\n", test_arr_out[i].num, test_arr_out[i].name, test_arr_out[i].mean);
	}

	fclose(out_test);

	return 0;

}
#endif
