#include<stdio.h>
int main()
{
    int n,reverse=0;
    printf("Enter a number to reverse\n");
    scanf("%d",&n);
    while(n!=0)
    {
        reverse=reverse*10;
        reverse=reverse+n%10;
        n=n/10;
    }
    printf("Reverse of Entered number is = %d",reverse);
    return 0;
}
