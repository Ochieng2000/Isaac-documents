#include<stdio.h>
int main()
{
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);
    if(i == 0){
        printf("Zero");
    }
    else if(i > 0){
        printf("Positive");
    }
    else{
        printf("Negative");s
    }

}
