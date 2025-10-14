//To check the number is stonge number or not 
//eg :- 145 --> 1!+4!+5! = 145 , 145--> strong number

#include <stdio.h>
int main(){
    
    int n,n2,x,fact,sum=0;

    printf("Enter a Number : ");
    scanf("%d",&n);

    n2 = n;

    while(n2>0){
        x = n2%10;
        fact = 1;
        for(int i = 1;i<=x;i++){
            fact *= i;
        }
        sum += fact;
        n2 = n2/10;
    }
    
    if(sum == n){
        printf("The number is strong");
    }
    else{
        printf("The number is not strong number");
    }
    return 0;
}