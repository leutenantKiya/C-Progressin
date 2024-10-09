#include <stdio.h>

void fib(int terms, int firsFib, int secondFib);

int main(){
    int terms, firstFib = 0, secondFib = firstFib + 1;

    printf("enter number of how many fibbonaci sequence: ");
    scanf("%d", &terms);

    fib(terms, firstFib, secondFib);
}

void fib(int terms, int firsFib, int secondFib){
    int i;
    int nextSequence; //local variable to store all fibbonaci sequence
    for(i = 1 ; i <= terms; i++){
        if(i <= 1){
            nextSequence = i;
        }else{
            nextSequence = firsFib + secondFib;
            firsFib = secondFib;
            secondFib = nextSequence;
        }
    printf("%d, " , nextSequence);
    }
}
