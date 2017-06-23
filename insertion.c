#include<stdio.h>
int sort(int *array)
{ 
 int i;
   for(i=1;i<7;i++)
     {
      int temp=array[i];
      int j=i-1;
      while(j>=0&&array[j]>temp)
     {
      array[j+1]=array[j];
      j=j-1;
     }
       array[j+1]=temp;
  }
}
int read()
{
 int n,i,array[20];
printf("enter the no.of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
 {
   scanf("%d",&array[i]);
 }
}
int main()
 {
   int array[20],i,n;
    //int array[7]={4,23,43,38,15,10,30};
 
    read();
    sort(array);
    printf("sorted list in ascending order\n");
  
  for(i=0;i<n;i++)
   {
      printf("%d\n",array[i]);
   }
}
