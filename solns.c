/* Enter your solutions in this file */
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int max(int a[], int n)
{
   int max = a[0];
   for(int i=1; i<n; i++)
   {
      if(a[i]>max)
         max=a[i];
   }
   return max;
}

int min(int a[], int n)
{
   int min =a[0];
   for(int i=1; i<n; i++)
   {
      if(a[i]<min)
         min=a[i];
   }
   return min;
}

float average(int a[], int n)
{
   float sum =0;
   for(int i=0; i<n; i++)
   {
      sum += a[i];
   }
   return sum/n;
}

int factors(int n, int a[])
{
   int i,j=0,count=0;
   while(n%2 == 0)
   {
      a[j++]=2;
      count++;
      n/=2;
   }
   for(i=3;i<sqrt(n);i++)
   {
      while(n%i == 0)
      {
         a[j++]=i;
         count++;
         n/=i;
      }
   }
   if(n>2)
   {
      a[j++]=n;
      count++;
   }
   return count;
}

int mode(int a[], int n)
{
   int i,count,j,value,maxcount=0;
   for(i=0; i<n; i++)
   {
      count=0;
      for(j=0;j<n;j++)
      {
         if(a[i] == a[j])
            count++;
      }
      if(count>maxcount)
      {
         value=a[i];
         maxcount = count;
      }
   }
   return value;
}
