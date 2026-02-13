#include <stdio.h>
int reverse(int num[],int n);
void printarr(int num[],int n);
int main(){
    int num[]={2,3,4,5,7};
    reverse(num,5);
    printarr(num,5);
    
    return 0;
}
int reverse(int num[],int n){
    
    for(int i=0;i<n/2;i++){
        int firstval=num[i];
        int secondVal=num[n-i-1];
        num[i]=secondVal;
        num[n-i-1]=firstval;    
    }
}
void printarr(int num[],int n){
    for(int i=0;i<n;i++){
        printf("%d",num[i]);
    }
    printf("\n");
}
