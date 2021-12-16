#include<stdio.h>
 int dig_sum(int n)
 {
 if(n==0)
   return 0;
  return(n%10+dig_sum(n/10));
 }
 int main()
 {
 int num=1234;
 int res=dig_sum(num);
 printf("Sum of digits in %d is %d\n",num,res);
 return 0;
 }
