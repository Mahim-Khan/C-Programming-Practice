#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,l1,l2,j;
    gets(a);
    gets(b);
    l1=strlen (a);
    l2=strlen (b);
    for(i=0;i<l1;i++)
    {
        c[i]=a[i];

    }
    //c[i]='';
    for(j=0,i=(i+1);j<l2;j++)
    {
        c[i]=b[j];
        puts(c);
    }
    return 0;
}

