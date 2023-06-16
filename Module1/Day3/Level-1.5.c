// Write a program to find both smallest and largest digits in given n numbers
// For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, 
// the result will be "Not Valid", 1 and 6, 0 and 5

#include<stdio.h>

void check(int temp) {
    int arr[10] = {0}, i = 0, greatest = 0, smallest = 0;
    
    if (temp >= 0 && temp < 10) {
        printf("Not Valid\n");
        return;
    }
    
    while (temp > 0) {
        arr[i] = temp % 10;
        temp /= 10;
        i++;
    }
    
    greatest = smallest = arr[0];
    
    for (int j = 1; j < i; j++) {
        if (arr[j] > greatest)
            greatest = arr[j];
        if (arr[j] < smallest)
            smallest = arr[j];
    }
    
    printf("%d and %d\n", smallest, greatest);
}

int main() {
    int n, num;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &num);
        check(num);
    }
    
    printf("Exiting\n");
    
    return 0;
}