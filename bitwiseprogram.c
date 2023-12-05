// write a program to check given value is even or odd by using Bitwise operators.


#include<stdio.h>
int main()
{
    int a;
    printf("Enter the nummber:");
    scanf("%d",&a);

    if(a&1)
    {
        printf("%d is odd \n",a);

    }
    else {
        printf("%d is even \n",a);

    }
    return 0;
}