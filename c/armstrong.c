#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int result=0,r;  // r=remainder 
    int original=n;
    while (original>0){
        r=original%10;
        result+=r*r*r;
        original/=10;
    }
    if(result==n)   printf("%d is an armstrong no.",n);
    else  printf("%d is not an armstrong no. ",n);
    
     
    return 0;
}