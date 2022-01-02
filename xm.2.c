#include<stdio.h>
int main()
{
    char str[]="we know C/C++";
    char *p;
    p=str;
    printf("\n 1. %s",p);
    printf("\n 2. %s",p++);
    str[8]='\0';
    printf("\n 3. %s",str);
    printf("\n 4. %s",++p);
    printf("\n 5. %c",str[9]);
    return 0;
}
