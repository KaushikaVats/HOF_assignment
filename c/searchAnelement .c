#include<stdio.h>
int main(){

    int n;
    printf("enter no. of elemnts of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter a no. ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==x)  printf("%d is found",x);
        else printf("%d not found",x);
    }
    return 0;

}