//WAP to check the given number is armstrong or not by using while loop.(chatgpt)

#include <stdio.h>
#include <math.h>
int main() {
    int number, b,c, n = 0, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    b =number;
    while (b != 0) {
        b/= 10;
        ++n;
    }
    b=number;
    while (b!= 0) {
        c = b % 10;
        sum += pow(c, n);
        b /= 10;
    }
    if (sum ==number)
        printf("%d is an Armstrong number.\n",number);
    else
        printf("%d is not an Armstrong number.\n",number);
    return 0;
}
