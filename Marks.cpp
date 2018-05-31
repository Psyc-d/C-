#include<stdio.h>
#include<math.h>
int main()
{	
	int El,Dh,C,Dr,Ce,Sum,Percent;
	printf("Enter The Marks For Electromagnetics out of 100 \n");
  	scanf("%d",&El);
  	printf("Enter The Marks For Design History out of 100 \n");
  	scanf("%d",&Dh);
  	printf("Enter The Marks For Calculus out of 100 \n");
  	scanf("%d",&C);
  	printf("Enter The Marks For Design Realization out of 100 \n");
  	scanf("%d",&Dr);
  	printf("Enter The Marks For Computational Engg out of 100 \n");
  	scanf("%d",&Ce);
  	Sum=El+Dh+Ce+Dr+C;
  	Percent=Sum*100/500;
  	if(Percent>90)
  	{ printf("The student got an S grade \n");
  	}
  	  else
  	 { if(Percent>80)
  	   { printf("The student got an A grade \n");
  	   }
  	   else
  	   { if(Percent>70)
  	   { printf("The student got an B grade \n");
  	   }
  	    else
  	    { if(Percent>60)
  	    { printf("The student got an C grade \n");
  	    }
  	    else
  	     { if(Percent>50)
  	     { printf("The student got an D grade \n");
  	     }
  	     else
  	     { if(Percent<50)
  	     { printf("The student has failed \n");  
  		  }
  	     }
  	     }
  	     }
  	     }
  	     }
  	     printf("The Sum total is %d and the percent is %d", Sum, Percent);
  	     }
  	     
  	
  	
