#include<stdio.h>
#include<conio.h>
int main (){

int x[3][3];
int i,j;

float avg=0;

printf("Please give the value of 2D array\n");

for(i=0;i<3;i++){
//tyrydsetttddtt

for(j=0;j<3;j++){
    
    scanf("%d",&x[i][j]);

avg=avg+x[i][j];
   
}

}
avg=avg/9;

printf("Avarage is : %.2f",avg);

}