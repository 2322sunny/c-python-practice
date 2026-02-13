#include<stdio.h>

void cal(int a,int b,int *sum,int *pro,float *avg);

int main(){
int a=4,b=9,sum,pro,avg;

cal( a, b,&sum,&pro,&avg);
printf("Sum of two number is:%d\n",sum);
printf("Product of two number is :%d\n",pro);
printf("Average of two number is :%f\n",avg);

return 0;
}

void cal(int a,int b,int *sum,int *pro,float *avg){
    *sum=a+b;

    *pro=a*b;
    *avg=(a+b)/2;
