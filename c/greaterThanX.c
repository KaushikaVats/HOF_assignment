#include<stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    int arr[6] ={4,5,6,7,8};
    for(int i=0;i<=5;i++){
        if(arr[i]>x)  printf("%d\n",arr[i]);
    }
    return 0;
}