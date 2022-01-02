#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int count =0,i;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a' || a[i]=='e' a[i]=='i' || a[i]=='o' || a[i]=='u')
            count++;
    }
    printf("%d vowels",count);
    return 0;
}

