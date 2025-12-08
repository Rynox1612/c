#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c, d,root1,root2;
    printf("Enter the coefficients of a quadratic equation a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("x1=%f,x2=%f",root1,root2);
    } else if(d==0){
        root1=root2=-b/(2*a);
        printf("x1=x2=%f",root1);
    } else{
        printf("The roots are imaginary");
    }
}