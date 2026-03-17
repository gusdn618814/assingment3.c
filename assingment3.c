#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union Data {
    float f;
    unsigned int i;
};

int main() {
    union Data data;
    unsigned int sign, exponent, mantissa;
    int i;

    scanf("%f", &data.f);

    sign = (data.i >> 31) & 1;
    exponent = (data.i >> 23) & 0xFF;
    mantissa = data.i & 0x7FFFFF;

    printf("%u/", sign);

    for (i = 7; i >= 0; i--) {
        printf("%u", (exponent >> i) & 1);
        if (i == 4)
            printf(" ");
    }

    printf("/");

    for (i = 22; i >= 0; i--) {
        printf("%u", (mantissa >> i) & 1);
        if (i == 19 || i == 15 || i == 11 || i == 7 || i == 3)
            printf(" ");
    }

    return 0;
}

