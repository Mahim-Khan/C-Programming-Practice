#include<stdio.h>
#include<math.h>
int main()
{
double d,x=2.5,x0=1.5,x1=5.5,x2=9.5,x3=13.5,x4=17.5,x5=21.5,y0=4.328,y1=8.097,y2=12.944,y3=16.875,y4=21.896,y5=25.521;
double s,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,h=0,i,p;
//printf("f(x)=y0+pdy0");
s=(y1-y0);
s1=(y2-y1);
s2=(y3-y2);
s3=(y4-y3);
s4=(y5-y4);
s5=(s1-s);
s6=(s2-s1);
s7=(s3-s2);
s8=(s4-s3);
s9=(s6-s5);
s10=(s7-s6);
s11=(s8-s7);
s12=(s10-s9);
s13=(s11-s10);
s14=(s13-s12);

h=x1-x0;
//fact(2);
p=(x-x0)/h;
d=y0+p*s+((p*(p-1))/2)*s5+((p*(p-1)*(p-2))/6)*s9+(((p*(p-1)*(p-2)*(p-3))/24)*s12)+(((p*(p-1)*(p-2)*(p-3)*(p-4))/120)*s14);
printf("\nResult is: %lf",d);
return 0;
}
