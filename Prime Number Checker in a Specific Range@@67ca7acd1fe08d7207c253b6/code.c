// Your code here...
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) { // Replacing sqrt(n) with i * i <= n
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to print prime numbers in the range [a, b]
void printPrimesInRange(int a, int b) {
    int found = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("No prime numbers\n");
    }
}