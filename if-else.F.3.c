#include<stdio.h>
int main()
{
    int balance=10000,c=2222,a,b,d;
    printf("Enter pin\n");
    scanf("%d",&c);
    if(c==2222)
    {

    printf("\n1 for add amount \n2 for withdraw \nEnter a code: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Add amount : ");
        scanf("%d",&b);
        balance=b+balance;
        printf("your current balance is : %d\n",balance);
    }
    else if(a==2)
    {
        printf("withdraw : ");
        scanf("%d",&b);
        balance=balance-b;
        printf("your current balance is : %d\n",balance);

    }
    }
    else
    {
        printf("Worng pin\n");
    }


    return 0;
}
