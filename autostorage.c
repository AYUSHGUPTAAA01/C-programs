#include<stdio.h>
int fun();
int a;
int main()
{
    {
        int a,b;
        a=10;
        b+=a;
        printf("Inside block a=%d",a);

    }
}
