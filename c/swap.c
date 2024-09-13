#include<stdio.h>

void swap( int * n1, int *n2){
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
    printf("after swapping value of n1= %d and value of n2=%d",*n1,*n2);

}
int main (){
    int n1,n2;
    printf("enter two numbers :");
    scanf("%d %d",&n1,&n2);
    printf("before swapping  n1 = %d and n2 = %d\n",n1,n2);
    swap(&n1,&n2);
}