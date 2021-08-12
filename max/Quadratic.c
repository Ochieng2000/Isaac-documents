
#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, d,e;
    double x1, x2;
    printf("Enter the values of a, b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    d=sqrt((b*b) - (4*a*c));
    x1 = (-b + d)/(2*a);
    x2  = (-b - d)/(2*a) ;
    printf("%.2f\n", x1);
    printf("%.2f", x2);
}
