# include<stdio.h>
int main()
{
  int arr[5]={1,2,3,4,5},arr2[5]={0};
  for (size_t i = 0; i < 5; i++)
  {
    arr2[i]=arr[5-i-1];
  }
  printf("the element after reverse : {");
  for (size_t i = 0; i < 5; i++)
  {
    if(i==4)printf("%d}",arr2[i]);
    else printf("%d,",arr2[i]);
  }
  
  
}
