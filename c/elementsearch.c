#include<stdio.h>
int main(){
    int n;
    printf("enter no. of elements");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("\n");
    
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    int x;
    printf("enter element to search");
    scanf("%d",&x);
     
     int a=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            a=1;
            break;
         }
  }
  if(a==0) printf("%d not found",x);
  if(a==1)  printf("%d found ",x);

    return 0;

}
 