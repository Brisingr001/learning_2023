// Patern Generator:
// Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
// 1234554321
// 1234  4321
// 12     321
// 12      21
// 1        1

// Concepts to be used.
// - Loops

#include <stdio.h>

void Increasing(int n){
    for(int i=1;i<=n;i++){
        printf("%d",i);
    }
}

void Space(int n){
    for(int i=1;i<=n;i++){
        printf(" ");
    }
}

void Decreasing(int n){
    for(int i=n;i>=1;i--){
        printf("%d", i);
    }
}

void print_pattern(int n){
    for (int i=n;i>=1;i--){
        Increasing(i);
        Space(2*(n-i));
        Decreasing(i);
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    print_pattern(n);
    return 0;
}
