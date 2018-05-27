#include <stdio.h>
int main()
{
 // interger array declaration
 int a[5]={1,2,3,4,5};
 int b[10];
 int n,i;

// printing all values in array -a
 printf("\n the values of array - a are");
 for(i=0;i<5;i++)
 {
  printf(" %d", a[i]);
 }

// getting values in to array-b
 printf("\n How many values you want to enter int array-b");
 scanf("%d",&n);
 printf("\n Enter values into array-b");
 for(i=0;i<n;i++)
  {
    scanf("%d", &b[i]);
   }

// the values of array-b are:
printf("\n the values of array-b are");
for(i=0;i<n;i++)
 printf(" %d\n", b[i]);

return 0;
} 
