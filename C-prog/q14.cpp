#include<stdio.h>
#include<math.h>
int main()
{
//do division without div operator
int a,b,c,i=0;
label1:;
  printf("Enter the divisor\n");
  scanf("%d",&a);
    printf("Enter the dividend\n");
    scanf("%d",&b);
if(a>b)
goto label1;


while(b>=a)
{
b=b-a;
i++;
}
printf("Remainder is %d\n",b);
printf("Quotient is %d\n",i);



}
