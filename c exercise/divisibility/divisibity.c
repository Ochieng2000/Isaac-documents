#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number that is evenly divisible by seven: ");
    scanf("%d", &num);
    if(num%2 == 0 && num%7 == 0){
        printf("%d .Is evenly divisible by seven. ", num);
    }
    else if(num%2 != 0 && num%7 == 0){
        printf("%d .Is not evenly divisible by seven. ", num);
    }
    else{
        printf("%d .Is completely not divisible by seven");
    }
}
