#include <time.h>
#include <stdio.h>

unsigned char tak(unsigned char x, unsigned char y, unsigned char z) {
    if (y < x) {
        return tak(
            tak(x - 1, y, z),
            tak(y - 1, z, x),
            tak(z - 1, x, y)
        );
    } else {
        return z;
    }
}

int main() {
    int iterations = 100000;
    unsigned char volatile x = 18;
    unsigned char volatile y = 12;
    unsigned char volatile z = 6;
    clock_t start_time = clock();
    for (int i = 0; i < iterations; i++) {
        tak(x, y, z);
    }
    double t = (double)(clock() - start_time) / CLOCKS_PER_SEC / iterations;
    printf("%fs", t);
}