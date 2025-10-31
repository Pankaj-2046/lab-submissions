#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id, sec_last, last, sum, i;
	int factorial_sum = 1;
	
    printf("Enter your student id : ");
    scanf(" %d", &id);
    
    sec_last = (id / 10) % 10;
    last = id % 10;
    
    printf("student id is : %d \n", id);
    printf("second last digit of student id is : %d \n", sec_last);
    printf("last digit of student id is : %d \n", last);
    
    sum = sec_last + last;
    printf("sum : %d \n", sum);
    if (sum == 0 || sum == 1)
    {
        printf("Factorial is 1 .\n");
    }
    else if (sum > 0)
    {
        for (i = 1; i <= sum; i++)
        {
            factorial_sum = factorial_sum * i;
        }
        printf("Factorial of %d is %d",sum , factorial_sum);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
