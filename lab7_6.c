#include <stdio.h>
int main()
{
 int a[100],i,n,largest=0;
 printf("Enter the size of the array:");
 scanf("%d",&n);
 printf("\n Enter array values:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);

printf("\n The values of array are::");
for(i=0;i<n;i++)
 printf(" %d",a[i]);

//logic to find largest number
largest=a[0];
for(i=1;i<n;i++)
 {
  if(largest < a[i])
    {
      largest = a[i];
    }
 }

printf("\n The largest number is: %d", largest);
return 0;
}
