#include <stdio.h>
#include<string.h>
int main(void) {
	
int a,i,j,count=0;
scanf("%d",&a);
for(i=2;i<=a;i++)
{
if(a%i==0)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{ count++;
} }
if(count==2)
{ printf("%d\t",i);
}count=0;}}
return 0;
}
