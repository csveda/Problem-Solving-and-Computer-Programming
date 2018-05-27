#include <stdio.h>
int main()
{
 int a[100],i,n,total=0;
  float avg=0;
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("\n Enter array values:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

printf("\n The values of array are::");
for(i=0;i<n;i++)
 printf(" %d",a[i]);

//logic to find largest number
for(i=0;i<n;i++)
 {
   total = total+a[i];
 }
avg = total/n;

printf("\n The summation of n-values in array is: %d", total);
printf("\n The average of n-values in array is %f",avg);
return 0;
}
