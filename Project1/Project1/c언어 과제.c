#if 0
#include <stdio.h>
#define MAX (3) 

typedef struct student_informations
{
	int student_num;
	char student_name[10];
	int korean_score;
	int math_score;
	int english_score;
	int c_score;
	int python_score;
	int total_score;
	float mean;
}stu_info;

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
		scanf("%d", &info_arr_in[i].student_num);

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
	 

	// �� ���� ���Ͽ� ����
	fprintf(info_in, "�й�\t�̸�\t����\t����\t����\tc\tpytnon\t����\t���\n");
	
	// ����ü�� �ִ� ���� ���Ͽ� ����
	for (i = 0; i < MAX; ++i) {
		fprintf(info_in, "%06d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", \
			info_arr_in[i].student_num, info_arr_in[i].student_name, info_arr_in[i].korean_score\
			,info_arr_in[i].math_score, info_arr_in[i].english_score, info_arr_in[i].c_score, info_arr_in[i].python_score\
			,info_arr_in[i].total_score, info_arr_in[i].mean);
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
			&info_arr_out[i].student_num, info_arr_out[i].student_name, &info_arr_out[i].korean_score\
			,&info_arr_out[i].math_score, &info_arr_out[i].english_score, &info_arr_out[i].c_score, &info_arr_out[i].python_score\
			,&info_arr_out[i].total_score, &info_arr_out[i].mean);
	}

	printf("%s", buffer);  // �� ���� ��� 

	for (i = 0; i < MAX; i++) {  // �л� ���� ���
		printf("%06d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", \
			info_arr_out[i].student_num, info_arr_out[i].student_name, info_arr_out[i].korean_score \
			,info_arr_out[i].math_score, info_arr_out[i].english_score, info_arr_out[i].c_score, info_arr_out[i].python_score\
			,info_arr_out[i].total_score, info_arr_out[i].mean);
	}

	fclose(info_out);
#endif

	return 0;
}
#endif
