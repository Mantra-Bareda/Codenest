// Code to print factorial of a number
#include <stdio.h>

int main(){
    int n , fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        fact *= i;
    }

    printf("The Factorial of %d is : %d",n,fact);

    return 0;
}