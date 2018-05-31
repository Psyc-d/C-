#include<stdio.h>
#include<math.h>
int main()
{int n;

printf("Please enter the number of students in the class\n");
label1:;
scanf("%d",&n);
if(n<2)
  {printf("Enter a number greater than two you pathetic excuse for a teacher\n");
  goto label1;
  }
int students[n];
  printf("Please start entering the heights of the students\n");
  printf("Take care that they should be between 150 and 190 cms\n");
  for(int i=0;i<n;i++)
  {
    label2:;
    scanf("%d",&students[i]);
    if(students[i]<150 or students[i]>190)
    {printf("Did you not read the warning up there motherfucker?\n");
    goto label2;
    }
  }
int q=0,i=0;
int temp;
for(q=0;q<n+n;q++)                         //n+n causes ram overflow?                  //bubbled students
  {
      for(i=0;i+1<n;i++)
        {
            if(students[i]>students[i+1])
            {temp=students[i];                         //the old temp method
            students[i]=students[i+1];
            students[i+1]=temp;
            }

          }


        }
for(i=0;i<n;i++)
printf("%d\t",students[i]);                  //this should be looped , probably
int k,l,count;
count=n ;
while(count>0)
{
printf("\nplease choose two students , the lth tallest and kth shortest to remove\n");

scanf("%d %d",&l,&k);

  for(i=0;i<count;i++)
  printf("%d\t",students[i]);
printf("\n");


      if(k==(count-l))
      {
        students[k-1]=0;   //removing one student
        for(i=k-1;i<count-1;i++)
        {students[i]=students[i+1];
        }
        //students[n-1]=0;
        count--;
      }
        if(k!=(count-l))
        {
      //    students[k-1]=0;

          for(i=k-1;i<count-1;i++)

          {students[i]=students[i+1];
          }

    //      students[count-l-1]=0;                        //removing 2 students as opposed to one
          for(i=count-l-1;i<count-1;i++)
          {students[i]=students[i+1];
          }
          //students[n-1]=0;
          count=count-2;
        }

for(i=0;i<count;i++)
printf("%d\t",students[i]);
printf("\n");



}

}
