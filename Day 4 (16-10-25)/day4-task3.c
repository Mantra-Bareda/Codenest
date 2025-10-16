//count number of even number in a array
#include <stdio.h>

int main(){
    int a[5]={2,4,2,24,3},c=0;

    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            c+=1;
        }
        
    }

    printf("The number of Even number is : %d",c);

    return 0;
}