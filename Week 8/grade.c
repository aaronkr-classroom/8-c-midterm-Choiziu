// 8-c-midterm.c

#include <stdio.h>
#include "grade_funcs.h"

#define NUM_STUDENTS 10

int main(void) {
	int std_grades[NUM_STUDENTS] = { 85, 70, 55, 90,45,60,78,88,92,49 };

	calculate_average(std_grades, NUM_STUDENTS);
	find_max(std_grades, NUM_STUDENTS);
	find_min(std_grades, NUM_STUDENTS);
	count_pass_fail(std_grades, NUM_STUDENTS);

	return 0;
}