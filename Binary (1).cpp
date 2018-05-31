#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
double a=1,b,f=1,x,y,d=1,k,n;
printf("Give the order of the bionomial");
scanf("%lf",&n);
for (k=0;k<=n;k++)
{
for (a;a<=n;a++)
{f=f*a;
}
x=n-k;
for (y;y<=x;y++)
{d=d*y;}
k++;
}
printf("%lf %lf",f,d);
}


