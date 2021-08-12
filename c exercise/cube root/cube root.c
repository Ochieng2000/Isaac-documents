#include<stdio.h>
int main()
{
    float a,cube_root;
    printf("Enter the number: ");
    scanf("%f", &a);
    cube_root = cbrt(a);
    printf("Cube root of the number is %lf: ", cube_root);

}

