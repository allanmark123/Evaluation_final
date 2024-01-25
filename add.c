#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, num6 sum;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    printf("Enter the third number: ");
    scanf("%d",num3);

    printf("Enter the fourth number:");
    scanf("%d",num4);
    
    sum = num1 + num2 + num3 + num4;
    
    printf("The sum of %d and %d is %d.", num1, num2, sum);
    
    return 0;
}
