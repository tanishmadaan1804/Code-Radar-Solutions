// Your code here...
int insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}
