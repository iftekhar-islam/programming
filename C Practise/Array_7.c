#include<stdio.h>
#include<conio.h>
int main (){

float A[5],B[5],AB[5];
printf("Please enter the value of array A \n");
for(int i=0;i<5;i++){

scanf("%f",&A[i]);    

}

printf("Please enter the value of array B \n");

for(int i=0;i<5;i++){

scanf("%f",&B[i]);    

AB[i]=A[i]+B[i];


}
for(int i=0;i<5;i++){
printf("Summation of two array AB : %.0f \n",AB[i]);

}

}