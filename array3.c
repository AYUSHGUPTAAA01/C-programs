#include<stdio.h>
int main()
// Sum of the elements
{
    int numbers[5]={1,2,3,4,5};
    int a=0;
    for(int i=0;i<5;i++)
    {
        a+=numbers[i];
        
    }
    printf("Sum of numbers is %d\n",a);

    return 0;
}