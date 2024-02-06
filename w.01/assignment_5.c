#include<stdio.h>
void main()
{
    int a = 0 ;
    printf("enter the number : ");
    scanf("%d",&a);
    if(a % 1000 == a && (a/100 % 10))
    printf("\nthe num after reverse : %d \n",((a/100) % 10 + (a/10)%10 *10 + (a%10)*100));
    else printf("\nenter the number consists of 3 digit \n");
    scanf("bbbb");
}
