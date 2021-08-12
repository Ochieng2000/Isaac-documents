#include<stdio.h>
int main()
{
    int a;
    printf("Enter an alphabet, digit ,special charater");
    scanf("%d", &a);
    if((a >= 'a' && a <= 'z') ||(a >= 'A' && a <= 'Z'));
    {
        printf("%d is an Alphabet", a);
    }
    elseif(a >= 0 && a <= 9);
    {
        printf("%d is a digit", a);
    }
    else
    {
        printf("%d is a special character", a)
    }
return o;
}
