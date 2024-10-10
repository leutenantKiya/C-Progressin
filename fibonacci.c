#include <stdio.h>
#include <string.h>

void fib(int terms, int firsFib, int secondFib);

int main(){
    int terms, firstFib = 0, secondFib = firstFib + 1;
    char username[50] = "Antonius Kiya";
    char user[50];

    printf("name verification!!");
    printf("\nEnter your name : \n");
    fgets(user, 50, stdin);

    if(strcmp(user, username)){
    printf("enter number of how many fibbonaci sequence: ");
    scanf("%d", &terms);
        if(terms < 0){
            printf("== fibonacci only consist of real positif numbers ==");
        }else{
            fib(terms, firstFib, secondFib);
        }
    }else{
    printf("We don't recognize you!!");
    }
}

void fib(int terms, int firsFib, int secondFib){
    int i;
    int nextSequence; //local variable to store all fibbonaci sequence
    for(i = 0 ; i < terms; i++){
        if(i <= 1){
            nextSequence = i;
        }else{
            nextSequence = firsFib + secondFib;
            firsFib = secondFib; //update value first jd second, second jadi first first baru + second lama
            secondFib = nextSequence;
        }
    printf("%d, " , nextSequence);
    }
}

