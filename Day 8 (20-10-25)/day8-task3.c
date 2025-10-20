//Factorial using Recusion

#include <stdio.h>

int fac(int n){
    if(n<=1){
        return 1;
    }

    return fac(n-1)*n;
}

int main(){
    int n;

    printf("Enter a Number : ");
    scanf("%d",&n);

    int f = fac(n);

    printf("The Factorial of %d : %d",n,f);

    return 0;
}