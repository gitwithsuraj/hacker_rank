#include <stdio.h>

// Function to return the greater of two integers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// Function to return the greatest of four integers
int max_of_four(int a, int b, int c, int d) {
    // Use the max function to find the largest number step by step
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    
    // Reading four integers
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // Printing the greatest of the four integers
    printf("%d", max_of_four(a, b, c, d));
    
    return 0;
}
