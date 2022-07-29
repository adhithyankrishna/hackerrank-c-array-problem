#include<stdio.h>
#include<stdlib.h>


int  main(){
   int i,count;
   int * ptr;
   int sum=0;
   
   scanf("%d",&count);

   ptr = (int *)malloc(sizeof(int)*count);

   for ( i = 0; i < count; i++)
   {
      scanf("%d",(ptr+i));
   }

   for ( i = 0; i < count; i++)
   {
      sum+=*(ptr+i);
       
   }
   printf("%d",sum);
  
   
   free(ptr);
   return 0;

}
