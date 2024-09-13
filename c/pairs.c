#include<stdio.h>
int main(){
 int x,totalpair=0;
 printf("enter a no.");
 scanf("%d",&x);
 int a[7]={1,2,3,4,5,6,7};
 for(int i=0;i<=6;i++){
     for(int j=0;j<=6;j++){
        if(a[i]+a[j]==x){
             totalpair++;
        }  
        printf("(%d %d)\n",a[i],a[j]);
     }
 }
printf("%d",totalpair);
    return 0;
}