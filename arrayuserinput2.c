#include<stdio.h>
int main()
{
    // Find the greatest element
    int arr[]={45,12,67,34,89,56};
    int max=arr[0];
    for(int i=1;i<6;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Largest element in the array is:%d\n",max);
     return 0;
}
