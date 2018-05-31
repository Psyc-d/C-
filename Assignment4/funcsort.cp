#include<stdio.h>


int sort( int matrix[][] )
{ int k,j,temp;
   for(k=0;k<m;k++)
   { for(j=0;j<n;j++)
   {   if(matrix[k][j]>matrix[k][j+1])
        {temp=matrix[k][j];
        matrix[k][j]=matrix[k][j+1];
        matrix[k][j+1]=temp;
        }
        }
        }
     for(k=0;k<m;k++)
   { for(j=0;j<n;j++)
   {   if(matrix[k][j]>matrix[k+1][j])
        {temp=matrix[k][j];
        matrix[k][j]=matrix[k+1][j];
        matrix[k+1][j]=temp;
        }
        }
        }
        }
        
        
        int main()
        { int m,n,i,j;
        printf("Enter the number of rows and columns in your matrix");
        scanf("%d %d",&m,&n);
        
        int matrix[m][n];
        	for(i=0;i<m;i++)
        	{ for(j=0;j<n;j++)
        	{  scanf("%d",&matrix[i][j]);
        	}}
        	 matrix[m][n] = sort(matrix[m][n]);
        	 
        	 
        	 printf("The matrix after sorting is \n");
        	 for(i=0;i<m;i++)
        	{ for(j=0;j<n;j++)
        	{  printf("%d \t",matrix[i][j]);
        	}
        	printf("\n");
        	}
        	}
        	
