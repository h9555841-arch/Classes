#include<stdio.h>
#include<math.h>

int main()
{
    printf("enter the number:");
    int num;
    scanf("%d" ,&num);
    int square_root = sqrt(num);
    printf("square root of %d is %d\n", num, square_root);

}