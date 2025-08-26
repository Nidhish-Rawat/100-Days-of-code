#include <stdio.h>

int main()
{
    int Num1, Num2, Sum, Diff, Prd, Quo;
    printf("Enter the first number : ");
    scanf("%d", &Num1);
    printf("Enter the second number : ");
    scanf("%d", &Num2);
    Sum = Num1 + Num2;
    printf("Sum of both number : %d \n",Sum);
    Diff = Num2 - Num1;
    printf("Difference of both number : %d \n",Diff);
    Prd = Num1*Num2;
    printf("Product of both number : %d \n",Prd);
    Quo = Num1/Num2;
    printf("Quotient of both number : %d \n",Quo);
}



 