#include<stdio.h>
int main(){
   int arr[5]={3,6,29,4,5};
   int sumeven=0, sumOdd=0,result;
   for(int i=0;i<=3;i++){
     if(i%2==0){
        sumeven+=arr[i];
     } 
     else{
        sumOdd+=arr[i];
     }  
   }
   result=sumOdd-sumeven;
   printf("%d",result);
    return 0;
}