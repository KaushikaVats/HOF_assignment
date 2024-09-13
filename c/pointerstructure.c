#include<stdio.h>
struct Students
{
    int rllno;
    char name[20];
    float marks;
    /* data */
};
void main(){

    struct Students S1={1,"jenny",90};
    struct Students *ptr = &S1;
  //////////////////////////////////////////////////////////////////////////////////  printf("hello world");

    printf("info for S1:");
    printf("\n %d %s %f", (*ptr).rllno,(*ptr).name,(*ptr).marks);
}