// Your code here...
#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++){
        for(int j=i; j<rows; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d", k);
        }
        for(int l=i-1; l>=1; l--){
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}