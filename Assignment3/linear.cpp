#include<stdio.h>
#include<stdlib.h>
int main()
{
int search[50],i,x;
for(i=0;i<50;i++)
{
search[i]=i+1;
}
printf("Enter the number you want the index for");
scanf("%d",&x);
i=0;
for(i;i<50;i++)
{if(search[i]==x)
{printf("%d is the index of the number you want",i);
goto label1;
}
}
printf("The number you entered wasnt in the array");
label1:;
}


