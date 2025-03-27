#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
 float a,b;
 printf("enter a");
 printf("enter b");
 scanf(" %f %f" , &a,&b);
 printf("Product %f\n" , a*b);
 return 0 ;
}