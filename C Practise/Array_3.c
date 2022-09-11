#include<stdio.h>
#include<conio.h>
int main(){

    printf("Please enter the value of array\n");

float x[5];
for (int i=0;i<5;i++){


scanf("%f",&x[i]);


}

for (int j=0;j<5;j++){

printf("The value of array [%.2f] is:%.2f\n",x[j],x[j]);


}
return 0;

}
