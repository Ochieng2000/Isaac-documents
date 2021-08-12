#include<stdio.h>
int main()
{
    float a,b,answer;
    printf("Enter the number: ", a);
    scanf("%f", &a);
    printf("Enter the power to which the number is to be raised to: ");
    scanf("%f", &b);
    answer = pow(a,b);
    printf("Answer is %lf", answer);
}
