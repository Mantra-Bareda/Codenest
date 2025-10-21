//Sum of a digit of int using recursion (eg -> input : 1234 , output : 10)

#include <stdio.h>

int sum(int n){
    
    if(n<=0){
        return 0;
    }
    else{
        return (n%10)+sum(n/10);
    }
    
}

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    int s=sum(n);

    printf("The sum is %d",s);

    return 0;
}