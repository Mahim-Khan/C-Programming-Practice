#include<stdio.h>
#include<conio.h>
int main()
{
    char x,y;
    int i=0;
    scanf("%c%c",&x);
    scanf("%c",&y);
    for(i=x;i<=y;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}
