#include<stdio.h>
int main()
{
    int a[100],b[100],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=(a[i]*10)+100;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
