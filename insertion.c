#include<stdio.h>
int sort(int *array)
{ 
   for(int i=1;i<7;i++)
     {
      int temp=array[i];
      int j=i-1;
      for(;j>0;array[j]>temp;j--)
     {
      array[j+1]=array[j];
     }
       array[j+1]=temp;
  }
 return 0;
}
int main()
 {
    int array[7]={4,23,43,38,15,10,30;
    
    sort(array);
  
  for(i=0;i<7;i++)
   {
      printf("%d\n",array[i]);
   }
}
