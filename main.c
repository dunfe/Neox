#include <stdio.h>
#include <stdbool.h>

bool prime(int n);

int main() {
    int n, i;
    printf("Enter n: ");
    scanf_s("%d", &n);
    for (i = 1; i <= n; i++) {
        bool isPrime = prime(i);
        if (isPrime == true && i != 1) {
            printf("\nYour Prime number: %d", i);
        }
    }
    prime(n);
}

bool prime(int n) {
    int i;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
};
