#include "stdio.h"

int main(){
    char c1;
    int i1;
    float f1;
    double d1;
    c1='D';
    i1=10;
    f1=20.5;
    d1=12.34;
    printf("%c %d %f %lf\n", c1, i1, f1, d1);

    printf("%d %f %lf", i1+10, f1+5, d1-2);
}