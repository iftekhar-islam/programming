#include<stdio.h>
#include<conio.h>
int main(){
int s=0;
int a=120;
while (a>=30)
{
    if(a%3==0 && a%5==0){

        s=s+a;



    }
    
    a--;
}

printf("Summation= %d\n",s);






}