#include<stdio.h>
#include<conio.h>

void divisors(int x){

int i;
printf("Divisiors of %d are:\n",x);
for(i=1;i<=x;i++){

if(x%i==0){

    printf("%d\n",i);
}
}
}
int main()
{



return 0;
}
=