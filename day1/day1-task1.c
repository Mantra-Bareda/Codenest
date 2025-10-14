// Code to check Number is even or odd

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%2==0){
        printf("The Number is Even");
    }
    else{
        printf("The Number is Odd");
    }
    return 0;
}