#include<stdio.h>
int main()
{
    int m;
    printf("Enter Your Marks: ");
    scanf("%d", &m);
    while(m < 0 || m > 100){
        if (m > 100){
            printf("You Entered a mark greater than 100!!!!!!!!\n");
        }
        else{
            printf("You Entered a mark less than 0!!!!!!!!\n");
        }
        printf("Enter Your Marks Again: ");
        scanf("%d", &m);
    }
    if (m >= 70){
        printf("A");
    }
    else if(m >= 60){
        printf("B");
    }
    else if(m >= 50){
        printf("C");
    }
    else if(m >= 40){
        printf("D");
    }
    else{
        printf("E");
    }

}
