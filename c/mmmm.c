include<stdio.h>
void reverse(int n){
    int n,r,result=0;
    while(n!=0){
    r=n%10;
    result=result*10+r;
    n=n/10;
}
//result=result/10;
printf("  %d ",result);
}
int main(){
    int m;
  m = reverse(123);
  return 0;
}