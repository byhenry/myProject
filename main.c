#include <stdio.h>
#include "sub.h"

int main(){
    printf("this is my calculator\n");

    double x = 2.0;
    double y = 3.0;
    printf("%lf - %lf = %lf\n", x, y, MySubFcn(x, y));
}