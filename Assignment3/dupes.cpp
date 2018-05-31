#include<stdio.h>
int main()
{
int k,i,x,n=0,j,count;
printf("Enter the number of terms in your array \n");
scanf("%d",&i);
int dupe[i],freq[50];
printf("Enter the terms of your array \n");
for(x=0;x<i;x++)
{
  scanf("%d",&dupe[x]);
  freq[x]=-1;
  }
  printf("The duplicate values in the array are \n");	
  x=0;
  for(k=0;k<i;k++)
  {
  		count=1;
  		for(x=k+1;x<i;x++)
  	{	
  		if(dupe[k]==dupe[x])
  		{ count++;
  		freq[x]=0;
  		}
  		}
  		if(freq[k] != 0)
  	freq[k] = count;
  		}
  		
  		for (k=0;k<i;k++)
  		{if(freq[k] != 0)
  		{ printf("%d occurs %d times \n",dupe[k],freq[k]);
  		}}
}  		
  		
  		
  		
  		
  		
  		
