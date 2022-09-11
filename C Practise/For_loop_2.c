#include<stdio.h>
#include<conio.h>
int main(){

int s=0;

for(int a=120;a>=30;a--){
    if (a%3==0 && a%5==0){
        s=s+a;
    }

  
}

printf("Summation= %d\n",s);




return 0;

}
