#include<stdio.h>
#include<math.h>
#include<conio.h>
struct point
{
    char car;
    char clr;
    int bat_cap;
    float mill_car;
};
int main()
{
   struct point mycar,yourcar;
   scanf("%c",&mycar.car);
   scanf("%c",&mycar.clr);
   scanf("%d",&mycar.bat_cap);
   scanf("%lf",&mycar.mill_car);
   scanf("%c",&yourcar.car);
   scanf("%c",&yourcar.clr);
   scanf("%%d",&yourcar.bat_cap);
   scanf("%lf",&yourcar.mill_car);


   printf("%c",mycar.car);
   printf("%c",mycar.clr);
   printf("%d",mycar.bat_cap);
   printf("%lf",mycar.mill_car);
   printf("%c",yourcar.car);
   printf("%c",yourcar.clr);
   printf("%%d",yourcar.bat_cap);
   printf("%lf",yourcar.mill_car);
   return 0;
}

