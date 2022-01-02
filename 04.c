#include<stdio.h>
#include<math.h>
int main()
{
double d,x=5,x0=3,x1=9,x2=13,x3=18,x4=23,y0=160,y1=392,y2=952,y3=1300,y4=1900;
double s,s1,s2,s3,s4,s5,s6,s7,s8,s9;
printf("f(x)=f(x0)+(x-x0)∆f(x0)+(x-x0)(x-x1)∆^2f(x0)+(x-x0)(x-x1)(x-x2)∆^3f(x0)+\n(x-x0)(x-x1)(x-x2)(x-x3)∆^4f(x0)");
s=(y1-y0)/(x1-x0);
s1=(y2-y1)/(x2-x1);
s2=(y3-y2)/(x3-x2);
s3=(y4-y3)/(x4-x3);
s4=(s1-s)/(x2-x0);
s5=(s2-s1)/(x3-x1);
s6=(s3-s2)/(x4-x2);
s7=(s5-s4)/(x3-x0);
s8=(s6-s5)/(x4-x1);
s9=(s8-s7)/(x4-x0);

d=y0+((x-x0)*s)+ (((x-x0)*(x-x1))*s4)+(((x-x0)*(x-x1)*(x-x2))*s7)+(((x-x0)*(x-x1)*(x-x2)*(x-x3))*s9);
printf("\n\nThe result is:%lf",d);
return 0;
}
