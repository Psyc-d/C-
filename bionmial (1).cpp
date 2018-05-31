#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,d,x,y,z,t;
printf("Give two numbers\n");
scanf("%lf %lf",&a,&b);
c=a+b;
d=a*a + 2*a*b + b*b;
printf("%lf %lf",c,d);
if (c*c==d)
{printf("\nThe bionomial theorem for the power of two is verified");
}
else
printf("There is something wrong with the code");

}

