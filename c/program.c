#include<stdio.h>
int main(){
    int x,y,temp;
    printf("enter two numbers :");
    scanf("%d%d ",&x,&y);
     temp=x;
    x=y;
    y=temp;
    printf("hello world\n");
    printf("the  swapped values of x and y are %d %d",x,y);

    return 0;
}