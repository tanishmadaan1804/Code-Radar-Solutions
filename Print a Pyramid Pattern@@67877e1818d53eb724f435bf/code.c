#include <stdio.h>
#include <stdio.h>

void printPyramid(int N) {
    for (int i = 1; i <= N; i++) {
    
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
    
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the number of rows: ");
    scanf("%d", &N);
    printPyramid(N);
    return 0;
}
