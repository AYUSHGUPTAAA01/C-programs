#include<stdio.h>
int main()
// User Input
{
    int array[10]; //Assuming a fixed size of 10
    int size;
    printf("Enter %d elements:\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    
     printf("Array elements:"); 
     for(int i=0;i<size;i++) 
     {
        printf("%d",array[i]);
     } 
     printf("\n");
     return 0;
}