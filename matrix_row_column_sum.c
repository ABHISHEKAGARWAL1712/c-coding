/*WAP to find the sum of rows and columns of matrix of given order*/
#include <stdio.h>
int main()
{
int i,j, m, n,a1[10][10],sum=0;
printf("enter the order of first matrix");
scanf("%d%d",&m,&n);
printf("enter the element of matrix");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&a1[i][j]);
     }
    
     
}
for(i=0;i<m;i++)
{
sum =0;
    for(j=0;j<n;j++)
    {
        sum = sum + a1[i][j];
    }
printf("sum of the  %d row = %d\n",(i+1),sum);

}
for(j=0;j<n;j++)
{
sum = 0;
    for(i=0;i<m;i++)
    {
        sum=sum+a1[i][j];
    }
printf("sum of the %d coulum = %d\n",(j+1),sum);

}   








return 0;
}  
      

     
