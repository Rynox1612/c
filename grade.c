#include <stdio.h>

int main(){
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f",&percentage);
    if(percentage>100)
        printf("Please enter a valid percentage.");
    else if (percentage>=60)
        printf("You passed with first class.");
    else if (percentage>=50)
        printf("You passed with second class");
    else if (percentage>=40)
        printf("You passed with third class.");
    else
        printf("You are failed, Better luck next time.");
    
}