#include<stdio.h>
#include<math.h>
int main()
{
int R=2,a=2,b=3,c=4,d=1,e=3,f=4,g=4,h=7;
R = R+a+b-c+e*f/g%h;
printf("%d %d %d %d %d %d %d %d %d", a, R, b, c, d, e, f, g, h);
return(0);
}
