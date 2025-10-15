//Check number is even or odd without modulas
#include <stdio.h>

int main(){
    
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n == (n/2)*2){
        printf("The Given Number is Even.");
    }
    else{
        printf("The Given Number is Odd.");
    }


    return 0;
}