#include <stdio.h>
#include "sub.h"
#include "add.h"

int main(){
    printf("this is my calculator\n");

    double x = 2.0;
    double y = 3.0;
    printf("%lf - %lf = %lf\n", x, y, MySubFcn(x, y));
    double x = 1;
    double y = 2;
    printf("&lf + %lf = %lf", x, y, MyAddFcn(x, y));

}