#include<stdio.h>
int main()
{
double q,x,t;
double b,p,c;
b = 1500;
p = 200;
c = 2;
printf("Enter the number of units sold\n");
scanf("%lf",&q);
printf("Enter the price of each laptop\n");
scanf("%lf",&x);
t= b+(q*p)+((q*x)*c/100);
printf("The salary is %lf",t);
}

