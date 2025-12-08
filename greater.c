#include <stdio.h>

int main (){
    int a,b,c;
    printf("Enter three numbers seperated by commas:");
    scanf("%d,%d,%d",&a,&b,&c);
    (a>=b && a>=c)
    ? (printf("%d is the greatest among all.",a))
    : (
        (b>=c && b>=a)
        ? (printf("%d is the greatest among all.",b))
        : (printf("%d is the greatest among all.",c))
    );
    return 0;
}