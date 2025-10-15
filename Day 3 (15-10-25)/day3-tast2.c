//Find Power od a number
#include <stdio.h>

int main(){
    int a,b,p=1;
    printf("Enter number and power : ");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        p *=a;
    }
    printf("%d^%d : %d",a,b,p);
    return 0;
}