void bubbleSort(int arr[],int n){
    for(int i =1;i<=a;i++){
        for(int j=0;j<=a-i;j++){
            if (arr[j]>arr[j+1]){
                int a= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=int a;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i = 0;i<=n;i++){
        printf("%i ",arr[i]);
    }
    
}