#include<stdio.h>
#include<string.h>
int main()
{

char s[5];
gets(s);

if(s=="hi")
{
    puts("hello");
}
else
{
    printf("no");
}
return 0;
}
