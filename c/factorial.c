#include<stdio.h>
int factorial(int x){
    int f=0;
    if(x==1)  return x;
    f=x*factorial(x-1);
    return f;

}


int main(){
    int a;
    a=factorial(5);
    printf("%d",a);
    return 0;
}
