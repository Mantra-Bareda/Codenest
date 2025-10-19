//Check if array is Sorted in asc. order or not

#include <stdio.h>

int main(){
    int a[10]={1,4,5,7,9,23,26,67,77,90};
    int flag=1;

    for (int i = 0; i < 9; i++)
    {
        if(a[i]>a[i+1]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("The Array is sorted");
    }  
    else{
        printf("The Array is not sorted");
    }
    

    return 0;
}