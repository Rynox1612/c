#include<stdio.h>

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    
    int n,r,npr,ncr;

    printf("Input value of n: ");
    scanf("%d",&n);
    printf("Input value of r: ");
    scanf("%d",&r);
    if (r>n){
        printf("The permutations and combinations for given set of inputs doesnt exist");;
        return 0;
    }

    npr = fact(n) / fact(n - r);
    
    ncr = fact(n) / (fact(r) * fact(n - r));

    printf("nPr = %d\n", npr);
    printf("nCr = %d\n", ncr);

    return 0;
}