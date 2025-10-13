// Code to Check number is prime or not
#include <stdio.h>

int main(){
    int n,flag = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
        
        if(n%i==0){
            flag = 1;
            break;
        }

    }

    if (flag==0)
    {
        printf("The number is Prime");
    }
    else{
        printf("The number is not Prime");
    }
    


    return 0;
}