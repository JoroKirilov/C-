#include <stdio.h>

void fnPlus(int nA, int nB) { printf("%d", nA + nB); }
void fnMinus(int nA, int nB) { printf("%d", nA - nB);  }
void fndiv(int nA, int nB) { printf("%d", nA / nB);  }

int main() {
    void (*func_ptr[3])(int, int) = {fnPlus, fnMinus, fndiv};
    puts("Choose an option:");
    puts("1. Addition");
    puts("2. Subtraction");
    puts("3. Division");
    int input;
    scanf("%d", &input);
    puts("Insert first number:");
    int firstNum;
    scanf("%d", &firstNum);
    puts("Insert second number:");
    int secondNum;
    scanf("%d", &secondNum);
    puts("The result is:");

    switch (input)
    {
    case 1:
        func_ptr[0](firstNum, secondNum);
        break;
    case 2:
        func_ptr[1](firstNum, secondNum);
        break;
    case 3:
        func_ptr[2](firstNum, secondNum);
        break;
    default:
    puts("Invalid option");
        break;
    }

    return 0;
}