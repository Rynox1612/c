# include<stdio.h>

int main(){
    int num, sum, j=100, r;

    while(j<=500){
        sum=0;
        num=j;
        while(num!=0){
            
            r=num%10;
            num=num/10;
            sum=sum+r*r*r;
     
        }
        if(sum==j){
            printf("%d\n",sum);
        }
            
        j=j+1;
    }
}