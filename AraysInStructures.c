#include<stdio.h>
struct Student{
    int sNo;
    char sName[20];
    int sMarks[4];
};

int main(){
 


    struct Student s1 = {123, "John", s1.sMarks[0]};
    struct Student s2 = {124, "Micheal", s2.sMarks[1]};
    struct Student s3 = {125, "James", s3.sMarks[2]};

struct Student stud[] = {s1, s2, s3};
    struct Student sMarks[4] = {67, 78, 24, 67};
   
    // struct Students sMarks[4] = {s1.sMarks, s1.sMarks, s2.sMarks, s3.sMarks}

    for(int i=0; i < sizeof(stud)/sizeof(stud[0]); i++){
        for(int j=0; j<sizeof(sMarks)/sizeof(sMarks[j]);j++){
            printf("%d %s %d\n", stud[i].sNo, stud[i].sName, stud[i].sMarks[j]);
        }
        printf("\n");
    }



    return 0;
}