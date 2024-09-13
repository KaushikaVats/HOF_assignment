#include<stdio.h>
int prime(int n){
  //  int n;
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0) printf("the no. is prime");
    else  printf("the no. is composite ");
}
void main(int ){
    printf("hello world\n");
    prime(7);   // CALLING
}