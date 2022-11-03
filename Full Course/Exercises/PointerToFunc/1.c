#include <stdio.h>
#include <stdlib.h>

typedef int ( * pfCalc ) ( int, int );

int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }

int main(int argc, char *argv[]) {
    pfCalc p = NULL;
    switch (*argv[2])
    {
    case '+':
        p = fnPlus;
        break;
    case '-':
        p = fnMinus;
        break;
    default:
        break;
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);

    printf("%d", p(num1, num2));

    return 0;
}
