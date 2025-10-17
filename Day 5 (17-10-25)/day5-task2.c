//Reverse a string without strrev()
#include <stdio.h>
#include <string.h> 

void reverseString(char str[]) {
    int s = 0;
    int e = strlen(str) - 1; 
    char t; 

    while (s < e) {

        t = str[s];
        str[s] = str[e];
        str[e] = t;

        s++;
        e--;
    }
}

int main() {
    char str[] = "Reverse The String";

    reverseString(str);

    printf("Reversed String: %s\n", str);

    return 0;
}