#include<stdio.h>
void sort(int,int,int[3][3]);
 int main()
        { int m=3,n=3,i,j;
        printf("Enter the number of rows and columns in your matrix");
        scanf("%d %d",&m,&n);
        
        int matrix[3][3];
        printf("Enter the values of the matrix \n");
        	for(i=0;i<m;i++)
        	{ for(j=0;j<n;j++)
        	{  scanf("%d",&matrix[i][j]);
        	}
        	}
        	
        
        	sort(m,n,matrix);
        	 
        	 
        	 printf("The matrix after sorting is \n");
        	 for(i=0;i<m;i++)
        	{ for(j=0;j<n;j++)
        	{  printf("%d \t",matrix[i][j]);
        	}
        	printf("\n");
        	}
        	}
void sort(int m,int n,int matrix[3][3])
{ int k,j,t,temp=0;




   for(k=0;k<m;k++)
   { for(j=0;j<n;j++)
  { for(t=j+1;t<n;t++)
   {   if(matrix[k][j]>matrix[k][t])
        {temp=matrix[k][j];
        matrix[k][j]=matrix[k][t];
        matrix[k][t]=temp;
        }
        }
        }
    }
     for(k=0;k<m;k++)
   { for(j=0;j<n;j++)
   for(t=j+1;t<n;t++)
   {
   {   if(matrix[k][j]>matrix[t][j])
        {temp=matrix[k][j];
        matrix[k][j]=matrix[t][j];
        matrix[t][j]=temp;
        }
        }
        }
        }
        }
