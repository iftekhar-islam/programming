#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,area;

printf("Please enter the height & lenght of the triangular\n");
scanf("%f%f",&a,&b);
  area = (a*b)/2;
printf("Area=%f",area);
return 0;
}