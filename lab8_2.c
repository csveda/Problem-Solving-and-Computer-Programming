#include<stdio.h>
int add();
int main()
{
 printf("Main Program\n");
 printf("function calling\n");
 printf("\n The sum is %d",add());
 printf("End of the main program\n");
}

int add()
{
 int a,b,sum=0;
 printf("\n ENter the a and b values:\n");
 scanf("%d %d", &a,&b);
 sum = a + b;
 return sum;
 }
