/*
#include <stdio.h>
int main()
{
    int arr[30],ele,num,i,loc;
    printf("Enter the size of an array:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the elements arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert:");
    scanf("%d",&ele);
    printf("Enter the location:");
    scanf("%d",&loc);
    for(i=num;i>=loc;i--)
    {
        arr[i]=arr[i-1];
    }
    num++;
    arr[loc-1]=ele;
    for(i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int arr1[30],num,i;
    for(i=0;i<num;i++)
    {
        printf("Enter the elements arr[%d]",i);
        scanf("%d",&arr1[i]);
    }
  
}