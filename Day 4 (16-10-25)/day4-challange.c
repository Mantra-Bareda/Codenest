//find first repeating element in a array
#include <stdio.h>

int main(){
    int a[10]={4,5,3,7,3,3,6,2,6,8},n,r=0;

    for(int i=0;i<10;i++){
        if(r==1){
            break;
        }
        n=a[i];
        for(int j=i+1;j<10;j++){
            if(n==a[j]){
                printf("The First repeating element is : %d",n);
                r=1;
                break;
            }
        }
    }
    if(r==0){
        printf("No repeating Elements (-1)");
    }

    return 0;
}