#include<stdio.h>
#include<conio.h>
int main (){

    int x[7]={-99,45,100,37,89,-327,245};
int max;
    

    for(int i=1;i<7;i++)
{

if(x[0]<x[i]){

    max = x[i];
}
}
printf("Biggest number is : %d",max);
}