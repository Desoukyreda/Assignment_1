#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1,2,3,4,5}, sum =0;
    for (size_t i = 0; i < 5; i++)
    {
        sum+=arr[i];
    }
    printf("the summation of element : %d",sum);
    return 0;
}
