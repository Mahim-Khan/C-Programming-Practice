#include<stdio.h>
int main()
{
    int c;
    int acc=200;
    printf("\n1 for burger\n2 for pizza\n3 for coke\nEnter your choice: ");
    scanf("%d",&c);
    if(c==1)
    {
        printf("burger\n");
        acc-=40;
        printf("your current balance is %d",acc);
    }
    else if(c==2)
    {
        printf("pizza\n");
        acc-=60;
        printf("your current balance is %d",acc);
    }
    else if(c==3)
    {
        printf("coke\n");
        acc-=20;
        printf("your current balance is %d",acc);
    }
    else
    {
        printf("worng\n");
    }
    return 0;
}
