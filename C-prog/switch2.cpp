#include<stdio.h>
int main()
{
  int x,y,z,t,k,m,n;
    printf("Enter 4 numbers \n");
    scanf("%d %d %d %d",&x,&y,&z,&t);
    m = y>x && y>t && y>z;
    k = x>y && x>t && x>z;
    n = z>y && z>t && z>x;

    switch(k)
    {

    case 1 : printf("%d is the greatest",x);
break;
}
      switch(m) 
          {
        case 1 : printf("%d is the greatest",y);
break;
}
        switch(n){
          case 1 : printf("%d is the greatest",x);
break;
          default : printf("%d is the greatest",t);

    }


}
