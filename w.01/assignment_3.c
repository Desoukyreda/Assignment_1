#include<stdio.h>
int main ()
{
    int a=0 ,b=0 ;
    printf("enter the two number :\n");
    scanf("%d %d",&a,&b);
    printf("Before swap \nthe 1st num : %d , the 2st num : %d\n",a,b);
 int c = a;
  a = b;
  b = c ;
  printf("\nAfter swap \nthe 1st num : %d , the 2st num : %d",a,b);
}
