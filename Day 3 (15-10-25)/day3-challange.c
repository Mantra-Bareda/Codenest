//Find Sum of Prime Numbers in a given Range
#include <stdio.h>

int main(){
    int a,b,flag=1,sum=0;
    printf("Enter 2 Number for range : ");
    scanf("%d %d",&a,&b);

    for (int i = a; i <= b; i++){
        flag=1;
        for(int j = 2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            sum+=i;
        }
    }
    
    printf("The Sum of Prime Numbers in range is : %d",sum);

    return 0;
}