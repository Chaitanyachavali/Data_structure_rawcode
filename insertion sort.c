#include<stdio.h>
#include<conio.h>
main()
{
	int a[20]={9,8,7,6,5,4,3,2,1};
	int i,j,t;
	printf("the unsorted list will be");
 	for(i=0;i<9;i++)
	{
       printf("%d",a[i]);
    }
 	 for(i=1;i<9;i++) 
	  {
          j=i ;  
           t=a[i];  
         while(j>0)
		 {
		 	//  black list 
               if(a[j-1]<t)
               {
               	break;
			   }
			   else
			   {
			   	 a[j] = a[j-1];  
                 j = j-1;
	           }          
               
           // black list 
         }
            a [j] = t;
      }
	  	printf("The sorted algorith will be");
	for(i=0;i<9;i++)
	{
       printf("%d",a[i]);
    }
    getchar();  
}
