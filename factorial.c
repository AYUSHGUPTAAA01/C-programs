// Write a program to print the factorial of given number using for loop.

#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        fact=fact*i;
    }
    printf("Factorial of a given number is %d",fact);
    return 0;
}
