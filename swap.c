#include <stdio.h>

int swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}

int main(){
    int a,b;
    printf("Enter the value of (a b): ");
    scanf("%d %d",&a,&b);
    printf("a = %d\nb = %d",a,b);
    swap(&a,&b);
    printf("\na = %d\nb = %d",a,b);
}