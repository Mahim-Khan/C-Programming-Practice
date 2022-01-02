#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
double d,s,x=15.00,x0=11.00,x1=17.00,x2=20.00,x3=23.00,y0=1.04139,y1=1.23044,y2=1.301029,y3=1.361727;

printf("f(x)=((((x-x1)*(x-x2)*(x-x3))/((x0-x1)*(x0-x2)*(x0-x3)))*y0)+\n((((x-x0)*(x-x2)*(x-x3))/((x1-x0)*(x1-x2)*(x1-x3)))*y1)+\n((((x-x0)*(x-x1)*(x-x3))/((x2-x0)*(x2-x1)*(x2-x3)))*y2)+\n((((x-x0)*(x-x1)*(x-x2))/((x3-x0)*(x3-x1)*(x3-x2)))*y3)");

d=((((x-x1)*(x-x2)*(x-x3))/((x0-x1)*(x0-x2)*(x0-x3)))*y0)+((((x-x0)*(x-x2)*(x-x3))/((x1-x0)*(x1-x2)*(x1-x3)))*y1)+((((x-x0)*(x-x1)*(x-x3))/((x2-x0)*(x2-x1)*(x2-x3)))*y2)+((((x-x0)*(x-x1)*(x-x2))/((x3-x0)*(x3-x1)*(x3-x2)))*y3);
s=d-(log10(x));
printf("\n\nResult is:%lf",d);
printf("\n\nError is:%lf",s);
return 0;
}
