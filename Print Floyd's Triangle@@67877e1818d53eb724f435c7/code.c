// Your code here...

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int counter = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
}