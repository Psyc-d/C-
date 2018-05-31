#include<stdio.h>
#include<math.h>
int main() {
double r,x,m,n,q;
int s,y;

m=0;
n=0;

  printf("YOU ARE STRANDED!\n");
  printf("You need to survive by buying food from a shop that sells a fixed quantity every day\n");
  printf("They dont sell on sundays\n");
  printf("Today is a Monday\n");
  printf("You have called for help and people have responded to come and help in a certain number of days, Please enter the number of days you need to surive for\n");
  scanf("%d",&s);
label1:;
printf("You need to survive till then , so enter the minimum food (in grams) you need to survive daily\n");
scanf("%lf",&m);
printf("And now enter the maximum food the shop sells each day\n");
scanf("%lf",&n);
if(m>n)
{
printf("You wanna die ni***r?\n");
goto label1;
}

q=n-m;

if(q*6<m&&s>7)
{printf("You a dead ni***");
goto label1;
}


if(s>7)   //case if you need to survive for more than a week
{
r=s%7;
x=s*m;
x=x-(q*r);
x=x/n;
y=x+1;
printf("%d is the minimum number of days you need to buy food for",y );
}
if(s<=7)
{

x=(s*m)/n;
y=x;

r=x-y;
if(r==0)
printf("%d",y);
if(r>0)
printf("%d is the number of days you need to buy food for",y+1);



}




}





/*
y=(s*(q))/m;    //s=x+y and sm=Nx+qy
x=((2*m-n)*s)/m;*/
