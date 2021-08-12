#include<stdio.h>
#include<stdlib.h>
int main()
{

    srand(time(0));
    int upper = 20, lower = 10;
    printf("%d",(rand() % ( upper - lower + 1 )) + lower);
}
