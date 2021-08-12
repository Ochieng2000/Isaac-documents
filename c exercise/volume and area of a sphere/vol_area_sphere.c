#include<stdio.h>
int main()
{
    float r,h,area,volume;
    double pi = 3.142;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    printf("Enter the height of the sphere: ");
    scanf("%f", &h);
    area = (pi*r*r*4);
    volume = (pi*r*r*r*h*4)/3;
    printf("The area of the sphere is %lf:   and the volume of the sphere is %lf", area, volume);
}
