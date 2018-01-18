#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		count++;
		n=n/10;
	}
	printf("Number of digits are %d",count);
  return 0;
}
