//to find Sum of all element in a array

#include <stdio.h>

int main(){
    int a[5]={1,5,2,7,34},sum=0;


    for(int i=0;i<5;i++){
        sum+=a[i];
    }

    printf("The sum of all elements : %d",sum);

    return 0;
}