#include <stdio.h>
#include <stdlib.h>

void fun();
void sum(float a, float b);
float multiply(float c, float d);
int find_ASCII();

int main()
{
    fun();
    sum(7.7, 3.1);
    float result = multiply(3.9, 8.9);
    printf("%.2f\n", result);

    int h = find_ASCII();
    printf("The ASCII value of %c is %d\n", h, h);

    char ch;
    printf("Enter one character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d",ch,  ch);
    return 0;
}

void fun(){
        printf("My name is Newton\n");
        int x=45;
        int y = 67;
        int z = x + y;
        printf("The sum of the two numbers %d and %d is %d\n",x,y, z);
}

void sum(float a, float b){
   float s = a + b;
    printf("sum is %.2f\n",s);
}

float multiply(float c, float d){
    float g = c * d;
return g;
}

int find_ASCII(){
    char g = 'u';

    return g;
}
