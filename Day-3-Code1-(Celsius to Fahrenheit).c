#include <stdio.h>
int main() 
{
    float cel, fah;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);
    fah=(cel*9/5)+ 32;
    printf("Temperature in fahrenheit is : %.f\n ", fah);
}
    
    
