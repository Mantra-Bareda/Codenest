//count number of even and odd number in a array

#include <stdio.h>

int main(){
    int a[10]={1,2,4,6,5,3,3,6,7,5};
    int e=0,o=0;

    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            e+=1;
        }
        else{
            o+=1;
        }
    }

    printf("The Number of Even Number : %d\n",e);
    printf("The Number of Odd Number : %d",o);

    return 0;
}