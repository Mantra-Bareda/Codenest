//Print prime factorisation of a number
//Eg --> input 60 , o/p --> 2 2 3 5

#include <stdio.h>

int main(){
    
    int x,n,x2,flag=0,prime=1;

    printf("Enter a Number : ");
    scanf("%d",&x);

    x2=x;

    while(x2>1){
        flag=0;
        prime=1;
        for(int i=2;i<=x2;i++){
            n = x2%i;
            if(n==0){
                flag=1;
                for(int j=2;j<i;j++){
                    if(i%j==0){
                        prime=0;
                        break;
                    }
                }
            }
            if(flag==1 && prime==1){
                printf("%d ",i);
                x2 = x2/i;
                break;
            }
            else{
                continue;
            }
            
        }
    }


    return 0;
}   