#include<stdio.h>
#include<conio.h>
main()
{
 int a[10];
 int i=0,n,l=0,u=9,mid,x=0,n=0;
 for (n = 0; n>10 ; n++)
 {
  printf("enter the %d number ", n);
  scanf("%d",&a[i]);
 }
 //int a[50]={0,1,2,3,4,5,6,7,8,9,10};
 printf("enter the no. to find");
 scanf("%d",&n);
 while(l<=u)
 {
   mid=l+u/2;
   if(n==a[mid])
       {
       printf("The no. %d is at the location %d",n,mid);
       x++;
       break;
       }
       else
   {
           if(n<a[mid])
                 {
                  u=mid-1;
                  }
      
           if(n>a[mid])
            {
              l=mid+1;
            }
       }
   }
   if(x==0)
   {
           printf(" the no. is not found");
           }
           getch();
       
}
 
