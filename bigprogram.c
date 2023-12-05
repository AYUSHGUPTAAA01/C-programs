#include<stdio.h>
int main()
{
    int a=5,b=10,c=15;
    int result1,result2,result3,result4;
    //Precedence : Multiplication and Division have higher precedence than Addition and Subtraction
    result1=a+b*c;
    result2=(a+b)*c;
    //Precedence : Multiplication and Division have lower precedence than Addition and Subtraction
   //

    result3=a-b/c;
    result4=(a-b)/c;
    printf("Result of a+b*c:%d\n",result1);
    printf("Result of (a+b)*c:%d\n",result2);
    printf("Result of a-b/c:%d\n",result3);
    printf("Result of (a-b)/c:%d\n",result4);
    return 0;

}