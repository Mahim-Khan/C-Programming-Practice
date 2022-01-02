#include<stdio.h>
int main()
{
   int n,i,sum=0;
   scanf("%d",&n);
   for(i=1;i<n;i=i+2)
   {
       printf("%d+",i);
       sum+=i;
   }
   sum+=i;
   printf("%d=%d",i,sum);
   return 0;
}
