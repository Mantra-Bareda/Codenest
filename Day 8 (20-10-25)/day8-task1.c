//Print number till n using recrusion

#include <stdio.h>

int prt(int n,int n2){
    
    if(n>n2){
        return 0;
    }

    printf("%d\n",n);
    return prt(n+1,n2);

}

int main(){
    int n;
    
    printf("Enter a Number : ");
    scanf("%d",&n);

    prt(1,n);

    return 0;
}