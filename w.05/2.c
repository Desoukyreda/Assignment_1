# include<stdio.h>

int max_element(int arr[],int n)
{
    int max = arr[0];
  for(int i =1 ; i<n ;i++)
  {
    if(max<arr[i])max = arr[i];
  }
  return max ;
}
int main()
{
    int arr[6]={2,-2,3,5,7,8}, maximam;
    maximam = max_element(arr,6);
    printf("The max element in array : %d",maximam);
    
}