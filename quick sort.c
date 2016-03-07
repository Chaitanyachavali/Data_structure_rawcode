#include<stdio.h>
#include<conio.h>
main()
{
	int a[20]={9,8,7,6,5,4,3,2,1};
	int i;
	printf("the un sorted list will be:");
for(i=0;i<9;i++)
	{
       printf("%d",a[i]);
    }
	sort(0,8);
	printf("The sorted algorith will be");
for(i=0;i<9;i++)
	{
       printf("%d",a[i]);
    }
    getch();
}




int sort(int low,int high)
{
	int pivotlocation;
	if(low<high)
	{
		pivotlocation=divide(low,high);
		sort(low,pivotlocation);
		sort(pivotlocation+1,high);
	}
}



int divide(int low,int high)
{
	int a[20]={9,8,7,6,5,4,3,2,1};
	int mid,pivot,i,lastsmall,t;
	mid=low+high/2;
	pivot=a[mid];
	            t=a[mid];
				a[mid]=a[low];
				a[low]=t;
	lastsmall=low;
	for(i=low+1;i<high;i++)
	{
		if(a[i]<pivot)
		{
			lastsmall++;
			     t=a[i];
				a[i]=a[lastsmall];
				a[lastsmall]=t;
		}
	}
	             t=a[low];
				a[low]=a[lastsmall];
				a[lastsmall]=t;
	return lastsmall;
}





