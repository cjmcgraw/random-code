#include <stdio.h>
#include <stdlib.h>

#include "q_rsqrt.h"

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("you must provide a single value to do the inverse sqrt against\n");
        return 1;
    }

    float val = atof(argv[1]);
    float inverse_sqrt = Q_rsqrt(val);
    printf("%f", inverse_sqrt);
    return 0;
}