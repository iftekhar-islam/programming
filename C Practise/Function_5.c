#include<stdio.h>
#include<conio.h>

 float add(float x,float y){

 return x+y;


}
 float subtract(float x,float y){

return x-y;


}
 float multiply(float x,float y){

return x*y;


}
 float divide(float x,float y){

 return x/y;


}
int main()
{

printf("Please enter two floating number\n");
float x,y;
 scanf("%f%f",&x,&y);
float result_add=  add(x,y);

float result_subtract= subtract(x,y);

float result_multiply= multiply(x,y);

float result_divide= divide(x,y);


printf("add: %f\nsubtract :%f\nmultiply :%f\ndivide :%f",result_add,result_subtract,result_multiply,result_divide);
return 0;
}
