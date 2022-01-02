#include<stdio.h>
#include<math.h>
#include<conio.h>
struct point
{
    int x,y;

};
int main()
{
    double sum=0.00;
    struct point p1,p2;
    scanf("%d%d",&p1.x,&p1.y);
    scanf("%d%d",&p2.x,&p2.y);

    printf(" %d %d \n",p1.x,p1.y);
    printf(" %d %d \n",p2.x,p2.y);

    sum= ((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y));
    printf(" %lf \n",sum);
    sum= sqrt(sum);
    printf(" %lf \n",sum);

    return 0;
}
