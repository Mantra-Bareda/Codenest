//Count Frequency of element in array
#include <stdio.h>

int check(int n[] , int a,int len){
    
    for(int i=0;i<len;i++){
        if(n[i]==a){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int a[10]={1,2,4,2,4,5,2,7,2,6};
    int len = sizeof(a)/sizeof(a[0]);
    
    int a2[len];

    for(int i=0;i<len;i++){
        a2[i]=-1;
    }

    for(int i=0;i<len;i++){
        if(check(a2,a[i],len)){
            continue;
        }
        else{
            a2[i]=a[i];
        }
    }

    for(int i=0;i<len;i++){
        if(a2[i]==-1){
            continue;
        }
        else{
            int c=0;
            for(int j=0;j<len;j++){
                if(a[j]==a2[i]){
                    c+=1;
                }
            }
            printf("%d is %d Times\n",a2[i],c);
        }
    }

    return 0;
}