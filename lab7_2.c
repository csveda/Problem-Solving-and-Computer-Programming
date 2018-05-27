
#include<stdio.h>
int main()
{
 int i,even_cnt=0, odd_cnt=0, start,end;
 printf("\n Enter the starting range::");
 scanf("%d",&start);
 printf("\n Enter the ending range::");
 scanf("%d",&end);
 //logic
 for(i=start;i<=end;i++)
 {
	if((i%2)==0)
	{
		even_cnt++;
		printf("\n %d is a even number", i);
	}
	else
	{
		odd_cnt++;
		printf("\n %d is a odd number", i);
	}
}
printf("\n The total number of even numbers in given range is : %d\n",even_cnt);
printf("\n The total number of odd numbers in given range is : %d\n", odd_cnt);
return 0;
}
	 
