//To find Max number in a array of integer

#include <stdio.h>

int main(){
    int a[5]={3,5,10,20,4},max=a[0];
    
    for(int i=1;i<5;i++){
        if(max<a[i]){
            max = a[i];
        }
    }

    printf("The Maximum element in this array is : %d",max);
    
    return 0;
}