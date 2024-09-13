#include<stdio.h>


void reverse(int n){

int r=0;
while(n!=0){
r=r+(n%10);
r=r*10;
n=n/10;
}
r=r/10;
printf("reversed no. is %d",r);
}

int main(){
    reverse(1987);
    return 0;
}