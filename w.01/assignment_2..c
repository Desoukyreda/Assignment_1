#include<stdio.h>
int main()
{
  unsigned  int second =0;
    float hours =0.0 , minutes =0.0;
    printf("Enter the second : ");
    scanf("%d",&second);
    minutes = second / 60.0;
    hours = minutes / 60 ;
    printf("Hours = %.3f \nMinutes = %.2f ",hours,minutes);
}
