#include<stdio.h>
void insertionSort(int arr[],int n){
    int i,key,j;
    for(int i =1 ;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void print(int arr[],int size){
    int i;
    for(i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[] = {12,11,23,78,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("original array :");
    print(arr,n);
    printf("\n");
    insertionSort(arr,n);
    printf("\n");
    print(arr,n);
    return 0;
}