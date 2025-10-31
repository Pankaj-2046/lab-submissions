#include <stdio.h>

int main() {
    float marks[2][3][3];
    float total[2][3] = {0}; 
    
    float max_mark = 0.0;
    int top_class = 0, top_student = 0;
    
    int i, j, k;

    printf("Enter the marks of students (2 classes x 3 students x 3 subjects):\n");
    
    for (i = 0; i < 2; i++) {
        printf("\n*** Enter Class %d ***\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Student %d:\n", j + 1);
            for (k = 0; k < 3; k++) {
                printf("Subject %d: ", k + 1);
                scanf("%f", &marks[i][j][k]);
                
                total[i][j] = total[i][j] + marks[i][j][k]; 
            }
        }
    }

    for (i = 0; i < 2; i++) {
        float class_top = total[i][0]; 
        int top_student_in_class = 0;

        for (j = 1; j < 3; j++) { 
            
            if (total[i][j] > class_top) { 
                class_top = total[i][j];
                top_student_in_class = j;
            }
        }

        printf("\nTop Performer of Class %d: Student %d with %.2f marks\n", 
               i + 1, top_student_in_class + 1, class_top);
        
        if (class_top > max_mark) {
            max_mark = class_top;
            top_class = i;
            top_student = top_student_in_class;
        }
    }

    printf("\nOverall Top Performer: Class %d Student %d with %.2f marks\n", 
           top_class + 1, top_student + 1, max_mark);
           return 0;
       }
       
