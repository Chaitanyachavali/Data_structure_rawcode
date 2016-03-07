#include<stdio.h>
#include<conio.h>
main()
{
   	int a[10]={1,2,4,6,7};
   	int b[10]={3,5,8,9};
   	int c[20];
   	int asize=5, bsize=4;
   	int i=0,j=0,k=0;
   	printf("the sorted strings separately as a and b ");
   	for(i=0;i<5;i++)
	{
       printf("%d ",a[i]);
    }
   for(i=0;i<4;i++)
	{
       printf("%d ",b[i]);
    }
    while(i<asize||b<bsize)
    {
    	for(i=0,j=0;i<asize,j<bsize;k++)
   	{
   			if(a[i]<b[j])
   			{
   				c[k]=a[i];
   				i++;
			}
			else
			{
				c[k]=b[j];
				j++;
			}
			
	}
	}
   	if(i==asize)
   	{
   		while(j<bsize)
   		{
   			c[k]=b[j];
   			k++;
   			j++;
		   }
	   }
	   else if(j==bsize)
	   {
	   	while(i<asize)
	   	{
	   		c[k]=a[i];
	   		k++;
	   		j++;
		   }
	   }
}
	printf("By merging these two a and b string we get");
	for(k=0;k<9;i++)
	{
       printf("%d ",c[k]);
    }
     getch();
}
