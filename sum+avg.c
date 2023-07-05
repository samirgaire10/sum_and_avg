// this will find total and average of total 10 numbers..
#include <stdio.h>
int main (void)
{
   int i , data , cnt , sum = 0 ;
   float avg ;
   sum = 0 ;

   printf("Enter How many data you will enter ::");
   scanf("%d",&cnt);

   for (i = 1 ; i <= cnt ; i++ ) {
      printf("Enter a %ddata  :",i);

      scanf("%d",&data);
      sum = sum + data ;
}

avg = sum / cnt ;
printf("Total is %d, The average is %f ",sum , avg);

return 0;

}
