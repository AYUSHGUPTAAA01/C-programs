#include<stdio.h>
int main()
{
    int a=10,b=20;
    b=a+b;
    a=b-a;
    b=b-a;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;   
}