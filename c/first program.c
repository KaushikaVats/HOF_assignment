#include<stdio.h>
void reverse(int n){
    int n,r,result=0;
    while(n!=0){
    r=n%10;
    result=result*10+r;
    n=n/10;
}
//result=result/10;
printf(" reversed no. %d",result);
}
void main(){
 reverse(123);
printf("hello world");
}