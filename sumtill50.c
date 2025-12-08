#include <stdio.h>

int main(){
    int  i=50, sum=0;

    do{
        sum=sum+i;
        i--;
    }while(i>=1);

    printf("%d",sum);
    return 0;
}