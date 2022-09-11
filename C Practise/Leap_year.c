#include<stdio.h>

int main()
{
int a;

printf("Please enter a year\n");
scanf("%d",&a);
  if(a%400==0||(a%4==0 && a%100!=0)){
   printf("Leap year");
  }else{
printf("Not Leap year");
  }
return 0;
}
