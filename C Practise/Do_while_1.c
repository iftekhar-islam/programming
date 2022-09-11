#include<stdio.h>
#include<conio.h>
int main (){
int a=120;
int s=0;
do
{
   
   if(a%3==0 && a%5==0){

    s=s+a;
   }
    a--;
} while (a>=30);


 printf( "%d\n",s);




}