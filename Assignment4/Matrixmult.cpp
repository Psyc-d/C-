#include<stdio.h>
int main()
{

int i,k,m,n,t;
printf("Enter the rows and columns of the first matrix \n");
scanf("%d %d",&m,&n);
int mat1[m][n],mat2[n][m],mat3[m][m];
for(i=0;i<m;i++)
	{
	  	 printf("Enter the %d values of the %d row \n",n,i+1);
	  	for(k=0;k<n;k++)
	 	{
           scanf("%d",&mat1[i][k]);
             }
            
             
             }


printf("Enter the rows and columns of the Second matrix \n");
k=0,i=0;
for(i=0;i<m;i++)
	{
	  	 printf("Enter the %d values of the %d row \n",n,i+1);
	  	for(k=0;k<n;k++)
	 	{
           scanf("%d",&mat2[i][k]);
             }
            
             
             }
             
             for(i=0; i<m; ++i)
        for(k=0; k<m; ++k)
        {
            mat3[i][k] = 0;
        }
for(i=0; i<m; ++i)
        {for(k=0; k<m; ++k)
 
 
 {           for(t=0; t<n; ++t)
            {
                mat3[i][k]+=mat1[i][t]*mat2[t][k];
            }
}
  }           
            
             
             
       printf("The First matrix is \n");      
             
k=0,i=0;
for(i=0;i<m;i++)
	{for(k=0;k<n;k++)
	{printf("%d \t",mat1[i][k]);
	}
	printf("\n");
	}
	
	
	printf("The second matrix is \n");
k=0,i=0;
for(i=0;i<m;i++)
	{for(k=0;k<n;k++)
	{printf("%d \t",mat2[i][k]);
	}
	printf("\n");
	}
	printf("The Result matrix is \n");
 printf("\nOutput Matrix:\n");
    for(i=0; i<m; ++i)
        for(k=0; k<m; ++k)
        {
            printf("%d  ", mat3[i][k]);
            if(k == m-1)
                printf("\n\n");

}
	}


