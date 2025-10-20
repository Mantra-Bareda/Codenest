//Print Number from 1 to N using recursion

#include <stdio.h>

int number(int n,int n2){
    if(n>n2){
        return 0;
    }

    printf("%d\n",n);
    return number(n+1,n2);

}

int main(){
    int n;

    printf("Enter A Number : ");
    scanf("%d",&n);

    number(1,n);

    return 0;
}