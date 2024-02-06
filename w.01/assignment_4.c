#include<stdio.h>
//#include<>
void main()
{
    int a ,b ;
     printf("enter the two number :\n");
    scanf("%d %d",&a,&b);
    printf("Before swap \nthe 1st num : %d , the 2st num : %d",a,b);
    a =a + b;
    b = a -b ;
    a = a - b;

    printf("\nAfter swap \nthe 1st num : %d , the 2st num : %d",a,b);
}

