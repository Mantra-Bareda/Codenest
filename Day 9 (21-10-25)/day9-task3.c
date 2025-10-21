//power of a number using recursion

#include <stdio.h>

int power(int n,int n2){
    
    if(n2<=1){
        return n;
    }
    else{
        return n*power(n,n2-1);
    }

}

int main(){
    int n,n2;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Enter the power : ");
    scanf("%d",&n2);


    int p=power(n,n2);

    printf("%d raise to %d is %d",n,n2,p);

    return 0;
}