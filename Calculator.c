#include<stdio.h>

int main()
{
    char c;

    printf("Please give me a character: \n");
    scanf("%c",&c);

    if ((c>='a' && c<='z')||(c>='A' && c<='Z'))
        printf("The character  %c  is part of the Alphabet!",c);
    else
        printf("The character  %c  is not part of the Alphabet!",c);    
    return 0;
}
