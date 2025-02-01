#include<stdio.h>
#include<stdlib.h>

struct Students {
    int sno;
    char sname[20];
    float sgpa;
};

int main(){

    struct Students* s1;

    s1 = (struct Students*)malloc( sizeof(struct Students) );
    if(s1 == NULL){
        printf("Out of memory Error");
    }
    else
    {
        printf("Enter your details");

        s1-->sno = 10;
        s1-->sname= "Newton";
        s1-->sgpa = 5.0;

        printf("Students details \n %d %s %f", s1-->sno, s1-->sname, s1--> sgpa);
        // scanf("%d %s %f",  &s1 --> sno, s1 --> sname, &s1 -- >sgpa);
        // printf("Student's details are %d \n %s \n %.2f \n", sno, sname, sgpa);
    }


    return 0;
}