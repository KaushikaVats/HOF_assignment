#include<stdio.h>


    struct Student{
        int rollno ;
        char name[20];
        float marks;

    };

    void main(){

    
    struct Student S1={1,"kauskika",98};
    struct Student S2={2,"maya",86};
    printf("%d\n",S2.rollno);
    printf("%f\n",S2.marks);
    printf("%s\n",S2.name);
    if(S1.marks>S2.marks){
        printf("S1 is ahead of S2");

    }

       
    }
    