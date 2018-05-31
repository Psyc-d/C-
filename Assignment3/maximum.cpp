#include<stdio.h>
int main()
{
int i,k,y,x,t;
		printf("Enter the number of terms in your array \n");
		scanf("%d",&i);
		t=i;
			int sort[i];
				k=0;
					printf("Enter the numbers of your array \n");
						for(k;k<i;++k)
						{ scanf("%d",&sort[k]);
						}	
			       		
					
							k=0;
									for(y=0;y<i;y++)
						{		   


									for(k=y+1;k<i;k++)
									{ 
										if(sort[y]>sort[k])
									  	{	x=sort[y];
		  									sort[y]=sort[k];
		  									sort[k]=x;
		  									}
		  									}
		  									
		  									
		  									}
		  						
		  									printf("%d is the maximum",sort[k-1]);
		  									}



