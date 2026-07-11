#include<stdio.h>

int main(void)
{
    // when we not assign any value it prints 0.0000
    float money;
    printf("money:%f\n", money);
    
    //when we assign a value of int instead of float it automatically add decimals and zeroes
    float lucky = 18;
    printf("lucky:%f\n", lucky);
    
    // working as expected 
    float age = 16.844;
    printf("age:%f\n", age);
    
    //when we assign a value of float (in int data type) instead of int it automatically remove decimals and after decimal value
    int bruh = 9.9;
    printf("bruh:%d\n", bruh);
    
    
    
}