#include<stdio.h>

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    
    int n,r,npr,ncr;



    printf("Input value of n: ");
    scanf("%d\n",&n);
    printf("Input value of r: ");
    scanf("%d\n",r);


}