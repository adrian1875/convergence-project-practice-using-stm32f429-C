#if 0
#include <stdio.h>
#include <string.h>
#define NUM (3)

typedef struct TEST {
	int t1;
	char t2[10];
	float t3;
}test;

typedef struct MAX {
	char max_name[10];
	float max;

}ma;

typedef struct MIN {
	char min_name[10];
	float min;
}mi;

ma max(test* b)
{
	float max = b[0].t3;
	int i;
	ma temp1;

	for (i = 0; i < NUM; i++) {
		if (max < b[i].t3) {
			max = b[i].t3;
			strcpy(temp1.max_name, b[i].t2);
			temp1.max = b[i].t3;
		}
		else if (max == b[i].t3) {
			max = b[i].t3;
			strcpy(temp1.max_name, b[i].t2);
			temp1.max = b[i].t3;
		}
	}
	return temp1;
}

mi min(test* b)
{
	float min = b[0].t3;
	int i;
	mi temp2;

	for (i = 0; i < NUM; i++) {
		if (min > b[i].t3) {
			min = b[i].t3;
			strcpy(temp2.min_name, b[i].t2);
			temp2.min = b[i].t3;
		}
		else if (min == b[i].t3) {
			min = b[i].t3;
			strcpy(temp2.min_name, b[i].t2);
			temp2.min = b[i].t3;
		}
	}
	return temp2;
}

int main(void)
{
	//test num[NUM] = { {123 ,"aaa",10.1},{123 ,"sss",140.9} ,{123 ,"ddd",14.3} };
	//test num[NUM] = { {123 ,"aaa",10.1},{123 ,"aaa",10.1} ,{123 ,"aaa",10.1} };
	test num[NUM] = { {123 ,"aaa",10.1},{123 ,"ddd",14.3} ,{123 ,"aaa",10.1} };

	ma a = max(num);
	mi i = min(num);

	printf("%s, %f\n", a.max_name, a.max);
	printf("%s, %f\n", i.min_name, i.min);
	
	return 0;
}

#endif
