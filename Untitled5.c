#include<stdio.h>
int main()
{
   double f,k;
   printf("Enter the value ");
   scanf("%lf",&f);
   k=(f-32)*5/9+273.14;
   printf("k value :%.2lf",k);
   return 0;

}
