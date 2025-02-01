#include<stdio.h>

union  un
{
    short a;
    short b;   
};

int main(){
    
        union un var;
        var.a =10;
        printf("%d\n", var.a);

        var.b= 20;
        printf("%d", var.b);

    return 0;
}