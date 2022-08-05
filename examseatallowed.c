#include<stdio.h>
#include<stdlib.h>
int main()
{
    float totalclass,present,percentage;
    printf("Enter totalclass=");
    scanf("%f",&totalclass);
    printf("Enter attend class=");
    scanf("%f", &present);
    percentage=(present/totalclass)*100;
    if(percentage>=75) puts("you are allowed to sit in the exam");
    else puts("you are not allowed to sit in the exam");
    return 0;
} 