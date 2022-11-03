#include <stdio.h>
#include <stdlib.h>

typedef int ( * pfCalc ) ( int, int );

int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int fnmultip(int nA, int nB) { return(nA * nB); }
int fndiv(int nA, int nB) { return(nA / nB); }

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
    case '/':
        p = fndiv;
        break;
    case '*':
        p = fnmultip;
        break;
    default:
        break;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);

    printf("%d", p(num1, num2));

    return 0;
}
