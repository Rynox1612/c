#include<stdio.h>

int main(){
    double basicSalary, grossSalary;
    
    printf("Enter your basic salary amount to get gross salary ");
    scanf("%lf",&basicSalary);
    
    printf("gross salary =%.2lf",1.4*basicSalary+1600);
    return 0;
}