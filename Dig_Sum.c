#include<stdio.h>
int dig_sum(int n)
{
if (dig_sum==0)
 return 0;
  return (n%10+dig_sum(n/10));
}
int main()
{
int num;
int res=dig_sum(num);
printf("Sum of digits is:%d,%d",&num,&sum);
return 0;
}
