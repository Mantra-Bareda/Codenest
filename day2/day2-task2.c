//Reverse a Number
#include <stdio.h>

int main(){
    int a,b=0,x,t;

    printf("Enter Number 1 : ");
    scanf("%d" , &a);
    
    x = a;

    while(x>0){
        t=x%10;
        x=x/10;
        b = b*10 + t;
    }

    printf("%d",b);

    return 0;
}