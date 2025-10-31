#include <stdio.h>
#include <stdlib.h>

int main( ) {
	int section[6] = {20, 30, 50, 60, 70, 80};
	int i, invi_count = 0;
	int chief = 0;
	int total_invi = 0;
	int student_count = 0;
	
	for ( i = 0 ; i < 6 ; i++) {
		if (section[i] > 1 && section[i] <= 30) {
			invi_count = 1;
			total_invi += invi_count;
			printf("section %d needs %d invigilator/s \n", i + 1, invi_count);
		} else if (section[i] > 30 && section[i] < 60) {
			invi_count = 2;
			total_invi += invi_count;
			printf("section %d needs %d invigilator/s \n", i + 1, invi_count);
		} else {
			invi_count = 3;
			total_invi += invi_count;
			printf("section %d needs %d invigilator/s \n", i + 1, invi_count);
		}
		student_count += section[i];
		printf("Total number of students are : %d \n", student_count);
	}  
	
	if (student_count > 300) {
		chief++;
		printf("A chief invigilator has been assigned");
		total_invi += chief;
	}
	printf("Total invigilators are : %d \n", total_invi);
	return 0;
}
