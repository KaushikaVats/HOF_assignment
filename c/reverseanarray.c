#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    /////////////////////reversing a array;
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}