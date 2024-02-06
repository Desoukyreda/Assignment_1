#include<stdio.h>
int main()
{
    float  celsius = 0.0 , kelvin = 0.0;
    int fren = 0;
    printf("enter the temperature in fren : ");
    scanf("%d", &fren);
    celsius = (fren - 32) * 5.0/9 ;
    kelvin = celsius + 273.15 ;
    printf("the temperature in celsius = %.3f C\nthe temperature in kelvin = %.3f K ",celsius ,kelvin);

}
