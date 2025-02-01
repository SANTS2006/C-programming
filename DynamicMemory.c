#include<stdio.h>
#include<stdlib.h>

// struct Students {
//     int sno;
//     char sname[20];
//     float sgpa;
// };

int main(){

    // struct Students* s1;

    // s1 = (struct Students*)malloc( sizeof(struct Students) );
    // if(s1 == NULL){
    //     printf("Out of memory Error");
    // }
    // else
    // {
    //     printf("Enter your details");

    //     // s1-->sno = 10;
    //     // s1-->sname= "Newton";
    //     // s1-->sgpa = 5.0;

    //     // printf("Students details \n %d %s %f", s1-->sno, s1-->sname, s1--> sgpa);

    //     scanf("%d %s %f",  &s1 --> sno, s1 --> sname, &s1 -- >sgpa);
    //     printf("Student's details are %d \n %s \n %.2f \n", sno, sname, sgpa);

    //     printf("This is me");
    // }


    int n, i, *ptr;
    printf("Enter total number of values: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));
    // if(ptr == NULL){
    //     printf("Out of memory");
    // }
    // else{
        printf("\nEnter the values: ");
        for(i=0; i<=n; i++){
            scanf("%d", (ptr +i));
        }
        printf("\nEntered values are: ");
        for(i=0; i<=n; i++){
            printf("%d", *(ptr + i));
        }
    // }
        free(ptr);

    return 0;
}