//Sum of number till n using recrusion

#include <stdio.h>

int sum(int n){
    
    if(n<=1){
        return 1;
    }

    return sum(n-1)+n;

}

int main(){
    int n;
    
    printf("Enter a Number : ");
    scanf("%d",&n);

    int s=sum(n);

    printf("The Sum till %d is %d",n,s);

    return 0;
}