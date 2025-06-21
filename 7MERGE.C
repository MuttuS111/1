#include<stdio.h>
#include<conio.h>
void merge(int a[],int l,int h);
void mergesort(int a[],int l,int m,int h);
void main()
{
  int n,a[20],i,l,h,m;
  clrscr();
  printf("enter the size\n");
  scanf("%d",&n);
  printf("enter the elements\n" );
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  l=0;
  h=n-1;
  merge(a,l,h);
  printf("after sorting\n");
  for(i=0;i<n;i++)
  {
   printf("%d\t",a[i]);
  }
  getch();
}

void merge(int a[],int l,int h)
{
   int m;
   if(l<h)
   {
     m=(l+h)/2;
     merge(a,l,m);
     merge(a,m+1,h);
     mergesort(a,l,m,h);
   }
}

void mergesort(int a[],int l,int m,int h)
{
  int i=l,j=m+1,k=l,c[20];
  while(i<=m &&j<=h)
  {
    if(a[i]<a[j])
    {
     c[k++]=a[i++];
    }
    else
    {
      c[k++]=a[j++];
    }
  }
  while(i<=m)
  {
    c[k++]=a[i++];
  }
  while(j<=h)
  {
   c[k++]=a[j++];
  }
  for(i=l;i<=h;i++)
  {
   a[i]=c[i];
  }
}


