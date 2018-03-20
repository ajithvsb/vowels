#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
int i;
scanf("%s",a);
for(i=0;i<strlen(a);i++)
{
printf("%c",a[i]+3);
}
	return 0;
}
