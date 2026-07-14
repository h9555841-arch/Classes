#include<stdio.h>

int main()
{
    int num1;
    printf("enter 1st number: ");
    scanf("%d", &num1);
    
    int num2;
    printf("enter 2nd number: ");
    scanf("%d", &num2);
    
    printf("the sum is: %d\n", num1 + num2);
    printf("the difference is: %d\n", num1 - num2);
    printf("the difference 2 is: %d\n", num2 - num1);
}