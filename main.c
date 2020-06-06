#include <stdio.h>
#include "add.h"

int main(){
    printf("this is my calculator\n");

    double x = 1;
    double y = 2;
    printf("&lf + %lf = %lf", x, y, MyAddFcn(x, y));

}