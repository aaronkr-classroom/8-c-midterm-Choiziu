#pragma once
// grade_funcs.h

// 성적 평균 함수 
void calculate_average(int grades[], int size) {
	float aver = 0;
	for (int i = 0; i < size; i++) {
		aver += grades[i];
	}
	aver /= size;
	printf("Average grade: %.1f\n", aver);
}

//최고 성적 계산하는 함수
void find_max(int grades[], int size) {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (max < grades[i]) max = grades[i];
	}
	printf("Highest grade: %d\n", max);
}

//최저 성적 계산하는 함수
void find_min(int grades[], int size) {
	int min = 100;
	for (int i = 0; i < size; i++) {
		if (min > grades[i]) min = grades[i];
	}
	printf("Lowest grade: %d\n", min);
}

// 합격 카운트
void count_pass_fail(int grades[], int size) {
	int pass_count = 0;
	int fail_count = 0;

	for (int i = 0; i < size; i++) {
		if (grades[i] >= 60) {
			pass_count++;
		}
		else {
			fail_count++;
		}
	}

	printf("Number of students passing: %d\n", pass_count);
	printf("Number of students failing: %d\n", fail_count);
}
