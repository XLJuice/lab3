#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>


int main()
{
 srand(time(NULL));
 int i, j, x, y, z, difc=0;
 printf("Enter size of first array:");
 scanf("%d",&x);
 int a [x];
 for(i=0;i<x;++i)
 {
  a[i]=rand()%10;
  printf("% d",a[i]);
 }
 printf("\nEnter size of second array:");
 scanf("%d",&y);
 int b [y];
 for(i=0;i<y;++i)
 {
  b[i]=rand()%10;
  printf("% d",b[i]);
 }
 z = x + y;
 int c[z];
 for (i = 0;i < x;++i)
 {
  c[i] = a[i];
 }
 for (i = 0;i < y;++i)
 {
  c[x+i] = b[i];
 }
 printf("\nNew array:");
 for(i=0;i<z;++i)
 {
  printf("% d",c[i]);
 }
 printf("\nRepeated numbers:");
 for(i=0;i<z;++i)
 {
  for(j=i+1;j<z;++j)
  {
   if(c[i]==c[j]){printf(" %d",c[i]);++difc;goto endc1;}
  }
  endc1:;
 }
 printf("\namount of repeated elements: %d",difc);
 int finc=z-difc;
 printf("\nNew size of array: %d ",finc);
 int c2[finc];
 int k=0;
 for(i=0;i<z;++i)
 {
  for(j=i+1;j<z;++j)
  {
   if(c[i]==c[j]){goto endc2;}
  }
  c2[k]=c[i];++k;
  endc2:;
 }
 printf("\nEdited array:");
 for(i=0;i<finc;++i)
 {
  printf("% d",c2[i]);
 }
 return 0;
}
