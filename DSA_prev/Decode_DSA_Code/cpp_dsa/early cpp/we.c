#include <stdio.h>

double Test();

int main() {

    printf("%.2lf", Test());

    return 0;

}

 double Test() {

    double s = 0.0;

    int a = 0, b = 1;

    for (int i = 0; i < 5; i++) {

        s += a;

        int temp = a + b;

        a = b;

        b = temp;

    } return s;
 }
