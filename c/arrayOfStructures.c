#include<stdio.h>


struct Student
{
    int rollno;
    char name[20];
    float marks;
    /* data */
};

void main(){
    struct Student S[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d\n %s\n %f",&S[i].rollno,&S[i].name,&S[i].marks);
        /* data */
    }
    for(int i=0;i<3;i++)
    {
        printf("\n%d\n%s\n%f\n ",S[i].rollno,S[i].name,S[i].marks);
        
    }
    
}
