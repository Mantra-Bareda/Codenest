//Find largest and smallest digit in a integer
#include <stdio.h>

int main(){
    int a,a2;
    printf("Enter a Integer : ");
    scanf("%d",&a);
    a2=a;
    int max=a2%10,min=a2%10;

    while(a2>0){
        if(max<(a2%10)){
            max = a2%10;
        }

        if(min>(a2%10)){
            min = a2%10;
        }
        a2=a2/10;
    }

    printf("The Greatest number in %d is %d\n",a,max);
    printf("The Smallest number in %d is %d\n",a,min);

    return 0;
}