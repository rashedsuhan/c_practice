#include<stdio.h>
int main ()
{
    int c;
    printf("Enter temperature in Celsius:\n");
    scanf("%d",&c);
    printf("The temperature in Fahrenheit is: %d\n",(c*9 + 160)/5 );
}
