#include<stdio.h>

struct std{
        int name;
};

int add(int x, int y);
int multiply(int x, int y, int z);
void swap(int *x, int *y);

int main(){
    int i = 100;
    int *ptr;
    ptr = &i;

    char *c;

    struct std* s1;

    printf("%d\n", i);
    printf("%p\n", ptr);
    printf("%p\n", &i);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n", *(&i));

    printf("\n");

    printf("%d\n", i);
    printf("%u\n", ptr);
    printf("%u\n", &i);
    printf("%u\n", &ptr);
    printf("%d\n", *ptr);
    printf("%d\n", *(&i));

    printf("size of int pointers: %d\n", sizeof(i));
    printf("size of char pointers: %d\n", sizeof(c));
    printf("size of structure pointers: %d\n", sizeof(s1));

    int r1 = add(30, 40);
    printf("%d\n", r1);

    int (*prt) (int,int);
    prt = &add;
    int x = prt(30, 50);
    printf("%d\n", x);

    int (*mult) (int, int, int);
    mult = &multiply;
    int multi = mult(20,5,6);
    printf("%d\n", multi);



//SWAPPING USING POINTERS
    int a=10, b=20;
    swap(&a, &b);

    printf("%d %d\n", a, b);

 
    return 0;
}

int add(int x, int y){

    int z = x+y;

    return z;
}

int multiply(int x, int y, int z){

    int p = x * y *z;

    return p;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}