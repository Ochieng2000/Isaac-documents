#include<stdio.h>
int main()
{
    char reg_no [30];
    int a,b,c,d;
    float total, average;
    printf("Enter your registration number: ");
    scanf("%s", &reg_no);
    printf("Enter marks in access: ");
    scanf("%d", &a);
    printf("Enter marks in excel: ");
    scanf("%d", &b);
    printf("Enter marks in word: ");
    scanf("%d", &c);
    printf("Enter marks in dtp: ");
    scanf("%d", &d);
    total = (a+b+c+d);
    average = total/4;
    printf("Registration Number: %s\nMarks in access is: %d\nMarks in excel is: %d\nMarks in word is: %d\nMarks in dtp is: %d\nTotal marks is: %lf\nAverage marks is: %lf\n", reg_no, a, b, c, d, total, average);
}
