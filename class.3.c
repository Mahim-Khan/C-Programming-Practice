#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,c=0,f=0;
    gets(s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==',')c++;

        if(s[i]=='.')f++;
    }
    printf("%d %d",c,f);

    return 0;
}
