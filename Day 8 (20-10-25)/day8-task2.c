//Sum of first n number using recursion

#include <stdio.h>

int sum(int n){
    if(n<1){
        return 0;
    }



    return sum(n-1)+n;

}

int main(){
    int n;

    printf("Enter A Number : ");
    scanf("%d",&n);

    int s = sum(n);

    printf("The Sum is : %d",s);

    return 0;
}