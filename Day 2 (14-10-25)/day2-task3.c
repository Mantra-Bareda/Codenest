//Find largest number between 3 number using Ternary operator(?)
#include <stdio.h>

int main(){
    int a,b,c,g;

    printf("Enter Number 1 : ");
    scanf("%d",&a);

    printf("Enter Number 2 : ");
    scanf("%d",&b);
    
    printf("Enter Number 3 : ");
    scanf("%d",&c);

    g = (a>b) ? (a>c) ? a : c : (b>c) ? b : c;
    
    printf("%d",g);


    return 0;
}