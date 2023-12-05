/*#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter a number to generate the sequence");
    scanf("%d,%d\n",&i,&j);
    for(i;i<15;i++)
    {
        i=i+j;
        printf("%d+%d\n",i,j);
    }
    return 0;
}   
*/
#include<stdio.h>
int main()
{
    int i,n,t1=0,t2=1,nextterm;
    printf("Enter the  number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:%d\n%d\n",t1,t2);
    for(i=3;i<=n;i++)
    {
        nextterm=t1+t2;
        printf("%d\n",nextterm);
        t1=t2;
        t2=nextterm;
        
    }
    return 0;
}