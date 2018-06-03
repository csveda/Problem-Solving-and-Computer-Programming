#include<stdio.h>
int add(int, int);
int main()
{
 int i=10,j=20,sum=0;
 printf("Main Program\n");
 printf("function calling\n");
 sum=add(i,j);
 printf("\n The sum is %d",sum);
 printf("End of the main program\n");
}

int add(int a, int b)
{
 int k=0;
 k = a + b;
 return k;
 }
