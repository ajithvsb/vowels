#include <stdio.h>
#include<string.h>
int main(void) {
	
int a,b,i,c=0,d=0;
scanf("%d\t%d",&a,&b);
c=a<b?a:b;
for(i=1;i<=c;i++)
{
if((a%i==0)&&(b%i==0))
{    d=i;
}}  printf("%d",d);
	return 0;
}
