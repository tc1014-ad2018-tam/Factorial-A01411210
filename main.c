#include <stdio.h>

int main() {
    int num;
    int factorial;


    factorial = 1;

    printf("Dame un numero:");
    scanf("%i",&num);

    if (num!=0) {
        int num2 = num;

        while (num2 > 0) {
            factorial *= num2;
            num2 = num2 - 1;
        }
    }
    printf ("El factorial de %i es %i", num, factorial);
    return 0;
}



return 0;
}