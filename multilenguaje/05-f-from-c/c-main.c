
#include <stdio.h>
#include "c-sum.h"

#define NUM 200

extern void sum_abs_(int inp[], int num, int asum);

int main(int argc, char **argv)
{
    int inp[NUM], num, i, asum;

    num = NUM;
    for (i=0; i < num; i++) {
        inp[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }
    sum_abs_(inp, num, asum);
    printf("sum=%d\n", asum);
    return 0;
}
