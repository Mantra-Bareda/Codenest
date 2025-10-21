//Print number from n to 1 using recursion

#include <stdio.h>

int prt(int n){
    if(n>=1){
        printf("%d\n",n);
        return prt(n-1);
    }
    else{
        return 0;
    }
    
}

int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    prt(n);

    return 0;
}