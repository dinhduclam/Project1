#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Fibonacci thu %d la %d\n", n, fibonacci(n));
    return 0;
}
