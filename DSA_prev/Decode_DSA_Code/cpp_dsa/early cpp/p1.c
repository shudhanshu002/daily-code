
#include <stdio.h>
#include <math.h>

double geo() {
    double p = 1.0;
    for (int i = 1; i <= 3; i++) {
        p *= pow(2, i);
    }
    return p;
}
int main() {
    printf("%.2lf", geo());
    return 0;
}
