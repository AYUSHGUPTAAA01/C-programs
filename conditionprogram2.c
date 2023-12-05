// write a program to check given character is even or odd  by using Ternary/Conditional operators.

#include<stdio.h>
int main()
{
  int a;
  char b;
  scanf("%c",&b);
  //a=(b>=65) && (b<=90) ? 1 : 0
  a=(b>='A') && (b<='Z') ? 1 : 0;
  printf("%d",a);
}