#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("To continue in English, press 1.  To continue in Kiswahili, press 2. ");
    scanf("%d", &a);
    if(a == 1){
        printf("Enter the two numbers: ");
        scanf("%d %d", &b, &c);
        sum = b+c;
        printf("Sum of the two numbers is: %d", sum);
    }
    else{
        printf("Weka nambari zako mbili: ");
        scanf("%d %d", &b, &c);
        sum = b+c;
        printf("Jumla ya nambari hizi mbili ni: %d", sum);
    }

}
