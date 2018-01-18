#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
 size_t maxlen = 0, leng;
 int i;
 int longest;
 for (i = 1; i < argc; i++) 
  {
  len = strlen(argv[i]);
  if (leng>maxlen) 
  longest = argv[i];
 }
printf("longest string is %s. \n", longest);
return 0;
}
