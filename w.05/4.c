# include<stdio.h>
# define n 6
float ave[n/2];
float * average(int arr[n])
{
  int  sum[n/2]={0};
    float j=0;
    int k = (int)j ;
    
    for (size_t i = 0; i < 5;i++,j+=.5f)
    {
        k=j;
        
        sum[k]+=arr[i]; 
        if(j != k)
        ave[k]=sum[k]/2.0;
        else ave[k]=sum[k]; 
    }
  static float * ptr = ave;
    return ptr ;
}
int main()
{
    int arr[n] ={0,2,3,4,5};float *ptr;
  ptr = average(arr);
  printf("the average : ");
    for (size_t i = 0; i < n/2; i++)
    {
        printf("%.02f,",ptr[i]);
    }
 
}