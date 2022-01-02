#include<stdio.h>
int main()
{
    int a[100],i,c=0,s=0;
    double avg=0.0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        s+=a[i];
    }
    printf("\nsum=%d",s);
    avg=s/10;
     for (i=0;i<10;i++)
     {
         if (avg<a[i])
         {
             c++;
         }

     }
     printf("\n%d students",c);

    return 0;

}
