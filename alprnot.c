#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    clrscr();

   
    printf("Enter any character: ");
   
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("The entered character %c is an Alphabet",c);
    else
        printf("The entered character %c is not an Alphabet",c);

    return 0;
}
