#include<stdio.h>
int main()
{
int n,rev_num=0,rem,original_num;
printf("Enter a number");
scanf("%d",&n);
original_num=n;
while(n!=0)
{
rem=n%10;
rev_num=rev_num*10+rem;
n/=10;
}
if(original_num==rev_num)
printf("yes");
else
printf("no");
return 0;
}
