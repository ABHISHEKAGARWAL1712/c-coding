/*WAP to count how many even numbers are there in a given integer array*/
#include<stdio.h>
int main()
{
int i , arr[100],count=0, n;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the element of array");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
      count=count+1;
    }
}
printf("number of even numbers=%d",count);

return 0;
}
