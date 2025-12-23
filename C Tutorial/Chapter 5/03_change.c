#include<stdio.h>

int change(int);
int change(int a){
    a = 77;
    return 0;

}

int main(){
    int b = 22;
    change(b); //The value of b will not change this happen bcz a copy if b is passed
    printf("Value of b is: %d", b);
    return 0;
}
