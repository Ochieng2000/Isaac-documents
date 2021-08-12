#include<stdio.h>
int main()
{
    int i = 3,sum=0;
    while(i < 31){
        printf("%d ", i);
        sum = sum + i;
        i = i + 4;

    }

    printf("\n%d ", sum);
}
