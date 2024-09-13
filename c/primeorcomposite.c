#include<stdio.h>
void prime(){
    int a,n;
    printf("enter a number ");
    scanf("%d",&n);
    a=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0) printf(" %d the no. is prime",n);
    if (a==1)  printf(" %d the no. is composite",n);
}
int main(){
    
    prime(878);  // caling
    return 0;
}