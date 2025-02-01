#include<stdio.h>

struct Student{
    
    int sNo;
    char sNme[20];
    float sGPA;

};

int main(){
    
      struct Student s1 = {111, "Sam", 5.0};
        struct Student s2 = {112, "Kolo", 4.9};
          struct Student s3 = {113, "Samson", 4.5};
          struct Student s4 = {114, "Ruth", 3.5};
          struct Student s5 = {115, "Kallon", 2.5};
          struct Student s6 = {116, "Phebe", 3.9};
          struct Student s7 = {117, "Deborah", 4.89};
    
    struct Student students[] = {s1, s2, s3,s4,s5,s6,s7};
    

    for(int i=0; i< sizeof(students)/sizeof(students[0]); i++){
        printf("%d %s %.2f \n", students[i].sNo, students[i].sNme, students[i].sGPA);
    }

    return 0;
}