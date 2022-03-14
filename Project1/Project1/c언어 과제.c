#if 1
#include <stdio.h>
#define MAX (3) 

typedef struct student_informations
{
	int student_MAX;
	char student_name[10];
	int korean_score;
	int math_score;
	int english_score;
	int c_score;
	int python_score;
	int total_score;
	float mean;
}stu_info;

typedef struct MAX_INFO {
	char max_name[10];
	float max;

}max_info;

typedef struct MIN_INFO {
	char min_name[10];
	float min;
}min_info;

max_info max_stu(stu_info* b)
{
	float max = b[0].mean;
	int i;
	max_info temp1;

	for (i = 0; i < MAX; i++) {
		if (max < b[i].mean) {
			max = b[i].mean;
			strcpy(temp1.max_name, b[i].student_name);
			temp1.max = b[i].mean;
		}
		else if (max == b[i].mean) {
			max = b[i].mean;
			strcpy(temp1.max_name, b[i].student_name);
			temp1.max = b[i].mean;
		}
	}
	return temp1;
}

min_info min_stu(stu_info* b)
{
	float min = b[0].mean;
	int i;
	min_info temp2;

	for (i = 0; i < MAX; i++) {
		if (min > b[i].mean) {
			min = b[i].mean;
			strcpy(temp2.min_name, b[i].student_name);
			temp2.min = b[i].mean;
		}
		else if (min == b[i].mean) {
			min = b[i].mean;
			strcpy(temp2.min_name, b[i].student_name);
			temp2.min = b[i].mean;
		}
	}
	return temp2;
}

void descending_order(stu_info* a)
{
	int i, j;
	stu_info temp;

	for (i = 0; i < MAX - 1; i++) {
		for (j = 0; j < MAX - i - 1; j++) {
			if (a[i].mean < a[i + 1].mean) {
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
}

int main(void)
{
#if 1
	// ���Ͽ� �л� ���� �Է�
	FILE* info_in = fopen("student_informations.txt", "w");
	stu_info info_arr_in[MAX] = { 0, };  //�л� ������ ������ ����ü �迭 (����ó�� ���)
	int i;

	// ����ü �迭�� �л� ���� ����
	for (i = 0; i < MAX; ++i) {
		printf("%d�� �л��� �й� �Է� ", i + 1);
		scanf("%d", &info_arr_in[i].student_MAX);

		printf("%d�� �л��� �̸� �Է� ", i + 1);
		scanf("%s", info_arr_in[i].student_name);

		printf("%d�� �л��� ���� ���� �Է� ", i + 1);
		scanf("%d", &info_arr_in[i].korean_score);

		printf("%d�� �л��� ���� ���� �Է� ", i + 1);
		scanf("%d", &info_arr_in[i].math_score);

		printf("%d�� �л��� ���� ���� �Է� ", i + 1);
		scanf("%d", &info_arr_in[i].english_score);

		printf("%d�� �л��� C ���� �Է� ", i + 1);
		scanf("%d", &info_arr_in[i].c_score);

		printf("%d�� �л��� python ���� �Է� ", i + 1);
		scanf("%d", &info_arr_in[i].python_score);

		info_arr_in[i].total_score = info_arr_in[i].korean_score + info_arr_in[i].math_score + info_arr_in[i].english_score \
			+ info_arr_in[i].c_score + info_arr_in[i].python_score;

		info_arr_in[i].mean = info_arr_in[i].total_score / 5;
	}

#if 0
	// ����ü �迭���� ��� ������ �������� ����
	descending_order(info_arr_in);
#endif

#if 1
	// 1��� �õ� �л��� �̸��� ��� 
	max_info a = max_stu(info_arr_in);
	min_info b = min_stu(info_arr_in);

	printf("1�� �л��� �̸�: %s, 1�� �л��� ���: %f\n", a.max_name, a.max);
	printf("%d�� �л��� �̸�: %s, %d�� �л��� ���: %f\n", MAX, b.min_name, MAX, b.min);

#endif
	// �� ���� ���Ͽ� ����
	fprintf(info_in, "�й�\t�̸�\t����\t����\t����\tc\tpytnon\t����\t���\n");

	// ����ü�� �ִ� ���� ���Ͽ� ����
	for (i = 0; i < MAX; ++i) {
		fprintf(info_in, "%06d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", \
			info_arr_in[i].student_MAX, info_arr_in[i].student_name, info_arr_in[i].korean_score\
			, info_arr_in[i].math_score, info_arr_in[i].english_score, info_arr_in[i].c_score, info_arr_in[i].python_score\
			, info_arr_in[i].total_score, info_arr_in[i].mean);
	}

	fclose(info_in);
#endif

# if 1
	// ���Ͽ��� �о����

	FILE* info_out = fopen("student_informations.txt", "r");
	stu_info info_arr_out[MAX] = { 0, };  // �л� ������ ���Ͽ��� ������ ������ ����ü �迭
	char buffer[100] = { 0, };  // �� ������ ������ ����
	//int i;

	fgets(buffer, sizeof(buffer), info_out);  // �� ���� ���ۿ� ����

	for (i = 0; i < MAX; i++) {  // �л� ���� ����ü �迭�� ���� 
		fscanf(info_out, "%06d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%f\n", \
			& info_arr_out[i].student_MAX, info_arr_out[i].student_name, &info_arr_out[i].korean_score\
			, &info_arr_out[i].math_score, &info_arr_out[i].english_score, &info_arr_out[i].c_score, &info_arr_out[i].python_score\
			, &info_arr_out[i].total_score, &info_arr_out[i].mean);
	}

	printf("%s", buffer);  // �� ���� ��� 

	for (i = 0; i < MAX; i++) {  // �л� ���� ���
		printf("%06d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", \
			info_arr_out[i].student_MAX, info_arr_out[i].student_name, info_arr_out[i].korean_score \
			, info_arr_out[i].math_score, info_arr_out[i].english_score, info_arr_out[i].c_score, info_arr_out[i].python_score\
			, info_arr_out[i].total_score, info_arr_out[i].mean);
	}

	fclose(info_out);
#endif

	return 0;
}

#endif
