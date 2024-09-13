#include<stdio.h>
int main(){
    int n;
    printf("enter the size of an array");
    scanf("%d",&n);
    int arr[n],brr[n];
    printf("enter elements of array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("YOU HAVE ENTERED THIS\n");
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
   

  printf("\n reversed array is\n");
    for(int i=n-1;i>=0;i--){
      printf("%d ",arr[i]);
      printf("\n");
    }

     for(int i=0;i<n;i++){
    brr[n]=arr[i]
    printf("%d ",brr[n]);
   }

   
    return 0;
}