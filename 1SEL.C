#include<stdio.h>
#include<conio.h>
void sort(int a[],int n)
{
   int i,j,pos,temp;
   for(i=0;i<n-1;i++)
   {
    pos=i;
    for(j=i+1;j<n;j++)
    {
      if(a[j]<a[pos])
      {
	pos=j;
      }
    }
    temp=a[pos];
    a[pos]=a[i];
    a[i]=temp;
   }
}

void main()
{
	int n,i,j,a[30];
	clrscr();
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("sorted array :");
	for(i=0;i<n;i++)
	{
	  printf("%d\t",a[i]);
	}
	getch();
}

