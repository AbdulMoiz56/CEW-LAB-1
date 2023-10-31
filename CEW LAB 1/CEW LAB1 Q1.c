#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emp_id,salary_per_hour;
    float hours_worked;
    printf("Enter employee id:");
    scanf("%d",&emp_id);
    printf("\nEnter total hours worked in this month:");
    scanf("%f",&hours_worked);
    printf("The total salary of employee(ID=%d):rs.%.2f/=", emp_id,   salary_per_hour*hours_worked);
    return 0;

}
