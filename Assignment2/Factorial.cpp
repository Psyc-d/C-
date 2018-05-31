#include<stdio.h>

int main()
{int n,fact=1,k=1;
printf("Enter the number you want the factorial for");
scanf("%d",&n);
for(k;k<=n;++k)
fact *= k;

printf("%d is the factorial of %d",fact,n);
}
