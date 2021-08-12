#include<stdio.h>
int main()
{
    int i,j=0;
    char name[5][20];
    int marks[5];
    for(i=1;i<=5;i++){
        printf("Enter the name of student %d: ", i);
        scanf("%s", &name[j]);
        printf("Enter marks for %s : ", name[j]);
        scanf("%d", &marks[j]);
        j++;
    }
    printf("\tName\t\tMark\n\t=================\n");
    for(i=0;i<5;i++){
        printf("\t%s\t\t%d\n", name[i],marks[i]);
    }


}

