// Your code here...
// Your code here...
int insertionSort(char arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;    
    }
}

int printArray(char arr[], int n){
    for(int i =0; i<n; i++){
        printf("%c ", arr[i]);
    }
}