#include <stdio.h>

int main()
{
    int a[5],i;
    printf("Enter 5 Number: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0 && a[i]<x)
        {
            a[i]=a[i]*y;
        }
        else if(a[i]%2==0 && a[i]>y)
        {
            a[i]=a[i]*x;
        }

    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
