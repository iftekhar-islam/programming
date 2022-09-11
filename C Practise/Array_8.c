#include<stdio.h>
#include<conio.h>
int main (){
    int a[5],sum_o=0,sum_e=0;

    int i;

    printf("Please enter the value of a array  \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);    
    }

    
   
        for(i=0;i<5;i++){

            if(a[i]%2!=0){
                sum_o=sum_o+a[i];
            }

        }    
    
    for(i=0;i<5;i++){

            if(a[i]%2==0){
                sum_e=sum_e+a[i];
            }

        }  

  printf("Values in array :");


    for(int i=0;i<5;i++){
        printf(" %d ",a[i]);
    }

printf("\nSum of odd values :%d\nSum of even values :%d",sum_o,sum_e);

}