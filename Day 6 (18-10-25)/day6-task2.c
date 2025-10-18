//Check string is palindrome or not
#include <stdio.h>
#include <string.h>

int main(){
    
    char s[100];
    int flag=1,len;


    printf("Enter the String : ");
    scanf("%s",s);

    len = strlen(s);

    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-i-1]){
            printf("%c %c",s[i],s[len-i]);
            flag=0;
            break;
        }
    }

    if(flag==0){
        printf("Not Plaindrome..");
    }
    else{
        printf("Plaindrome..");
    }
    
    
    return 0;
}