#include <stdio.h>
int main(void) {
	int i,n,re,rev;
	scanf("%d",&n);
	while(n!=0)
	{
	 re=n%10;
	 rev=rev*10+re;
	 n=n/10;
	}
	printf("%d",rev);
	return 0;
}
