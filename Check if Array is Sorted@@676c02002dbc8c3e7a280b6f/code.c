#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
            break;
        }
    }
    if(count){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
}