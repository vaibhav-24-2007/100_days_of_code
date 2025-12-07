#include <stdio.h>

int main() 
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius\n ");
    scanf("%f",&celsius);
    fahrenheit=(celsius * 9 / 5) + 32;

    printf("%.2f\n",fahrenheit);

    return 0;
}
