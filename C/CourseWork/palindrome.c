#include<stdio.h>
#include<string.h>


int main(){
    char string[] = "malayalam";
    for (int i = 0 ; i < strlen(string)/2 ; i++){
        if (string[i] != string[strlen(string) - i - 1]) {printf("This is not a palindrome\n"); return 0;}
    }
    printf("This is a palindrome");

    return 0;
}