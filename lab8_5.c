#include <stdio.h>
unsigned long long int factorial(unsigned int i) {
   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}
int  main() {
   int n;
   printf("\n Enter N- value");
   scanf("%d",&n);
   printf("Factorial of %d is %d\n", n, factorial(n));
   return 0;
}
