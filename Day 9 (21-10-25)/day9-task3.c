//find power of number using recusion

#include <stdio.h>

int power(int n,int n2){

    if(n2<=1){
        return n;
    }
    return n*power(n,n2-1);

}

int main(){
    int n ,n2;

    printf("Enter the number : ");
    scanf("%d",&n);

    printf("Enter the Power : ");
    scanf("%d",&n2);

    int p=power(n,n2);

    printf("%d raised to %d is %d",n,n2,p);

    return 0;
}