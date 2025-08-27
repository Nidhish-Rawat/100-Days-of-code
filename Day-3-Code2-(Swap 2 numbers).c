#include <stdio.h>
int main() 
{
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("swap done \n");
    printf("First number = %d \n", num1);
    printf("Second number = %d \n", num2);
}