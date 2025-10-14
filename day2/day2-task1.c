//Swap 2 no without 3rd variable
#include <stdio.h>

int main(){
    int a,b;

    printf("Enter Number 1 : ");
    scanf("%d" , &a);
    
    printf("Enter Number 2 : ");
    scanf("%d" , &b);

    a +=b;
    b = a-b;
    a -= b;

    printf("Number 1 after Swapping : %d\n",a);
    printf("Number 2 after Swapping : %d",b);

    return 0;
}