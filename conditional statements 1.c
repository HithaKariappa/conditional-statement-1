#include<stdio.h>
int main()
{
    int n;
    printf("Enter the marks\n");
    scanf("%d",&n);
    if(n<=100 && n>=85)
        printf("Your grade is A\n");
    else if(n<=84 && n>=70)
        printf("Your grade is B\n");
    else if (n<=69 && n>=55)
        printf("Your grade is C\n");
    else if (n<=54 && n>=40)
        printf("Your grade is D\n");
    else
        printf("Your grade is F\n");
    return;
}
