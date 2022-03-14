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
	// 파일에 학생 정보 입력
	FILE* info_in = fopen("student_informations.txt", "w");
	stu_info info_arr_in[MAX] = { 0, };  //학생 정보를 저장할 구조체 배열 (버퍼처럼 사용)
	int i;

	// 구조체 배열에 학생 정보 저장
	for (i = 0; i < MAX; ++i) {
		printf("%d번 학생의 학번 입력 ", i + 1);
		scanf("%d", &info_arr_in[i].student_MAX);

		printf("%d번 학생의 이름 입력 ", i + 1);
		scanf("%s", info_arr_in[i].student_name);

		printf("%d번 학생의 국어 성적 입력 ", i + 1);
		scanf("%d", &info_arr_in[i].korean_score);

		printf("%d번 학생의 수학 성적 입력 ", i + 1);
		scanf("%d", &info_arr_in[i].math_score);

		printf("%d번 학생의 영어 성적 입력 ", i + 1);
		scanf("%d", &info_arr_in[i].english_score);

		printf("%d번 학생의 C 성적 입력 ", i + 1);
		scanf("%d", &info_arr_in[i].c_score);

		printf("%d번 학생의 python 성적 입력 ", i + 1);
		scanf("%d", &info_arr_in[i].python_score);

		info_arr_in[i].total_score = info_arr_in[i].korean_score + info_arr_in[i].math_score + info_arr_in[i].english_score \
			+ info_arr_in[i].c_score + info_arr_in[i].python_score;

		info_arr_in[i].mean = info_arr_in[i].total_score / 5;
	}

#if 0
	// 구조체 배열에서 평균 순으로 내림차순 정렬
	descending_order(info_arr_in);
#endif

#if 1
	// 1등과 꼴등 학생의 이름과 평균 
	max_info a = max_stu(info_arr_in);
	min_info b = min_stu(info_arr_in);

	printf("1등 학생의 이름: %s, 1등 학생의 평균: %f\n", a.max_name, a.max);
	printf("%d등 학생의 이름: %s, %d등 학생의 평균: %f\n", MAX, b.min_name, MAX, b.min);

#endif
	// 열 제목 파일에 저장
	fprintf(info_in, "학번\t이름\t국어\t수학\t영어\tc\tpytnon\t총점\t평균\n");

	// 구조체에 있는 정보 파일에 저장
	for (i = 0; i < MAX; ++i) {
		fprintf(info_in, "%06d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%.2f\n", \
			info_arr_in[i].student_MAX, info_arr_in[i].student_name, info_arr_in[i].korean_score\
			, info_arr_in[i].math_score, info_arr_in[i].english_score, info_arr_in[i].c_score, info_arr_in[i].python_score\
			, info_arr_in[i].total_score, info_arr_in[i].mean);
	}

	fclose(info_in);
#endif

# if 1
	// 파일에서 읽어오기

	FILE* info_out = fopen("student_informations.txt", "r");
	stu_info info_arr_out[MAX] = { 0, };  // 학생 정보를 파일에서 가져와 저장할 구조체 배열
	char buffer[100] = { 0, };  // 열 제목을 저장할 버퍼
	//int i;

	fgets(buffer, sizeof(buffer), info_out);  // 열 제목 버퍼에 저장

	for (i = 0; i < MAX; i++) {  // 학생 정보 구조체 배열에 저장 
		fscanf(info_out, "%06d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%f\n", \
			& info_arr_out[i].student_MAX, info_arr_out[i].student_name, &info_arr_out[i].korean_score\
			, &info_arr_out[i].math_score, &info_arr_out[i].english_score, &info_arr_out[i].c_score, &info_arr_out[i].python_score\
			, &info_arr_out[i].total_score, &info_arr_out[i].mean);
	}

	printf("%s", buffer);  // 열 제목 출력 

	for (i = 0; i < MAX; i++) {  // 학생 정보 출력
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
