//Max and Min in array
#include <stdio.h>

int main(){
    int a[10]={3,5,2,4,6,8,6,4,1,9};

    int max=a[0],min=a[0];

    for(int i=0;i<10;i++){
        if(max<a[i]){
            max = a[i];
        }
        
        if(min>a[i]){
            min=a[i];
        }
    }

    printf("The Max in the array is : %d\n",max);
    printf("The Min in the array is : %d\n",min);


    return 0;
}