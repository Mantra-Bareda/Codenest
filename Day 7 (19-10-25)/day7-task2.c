//count number of time a element occurs in array
#include <stdio.h>

int main(){
    int a[15]={1,3,3,5,5,4,3,3,5,6,8,9,4,6,2};
    int b,c=0;

    printf("Enter The Element to check : ");
    scanf("%d",&b);

    for (int i = 0; i < 15; i++)
    {
        if(a[i]==b){
            c++;
        }
    }
    
    printf("The Element %d occur %d times in array",b,c);
    
    return 0;
}