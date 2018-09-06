/*
 * Este programa fue hecho para obtener el factorial de un numero dado por el usuario a traves de un loop while
 *
 * Mario Emilio Aguilar Chung
 * 9/5/2018
 * A01411210@itesm.mx
 *
 *
 *
 */
#include <stdio.h>

int main() {
    //Aqui establezco mis variables
    int num;
    int factorial;

    //Establezco el valor inicial de la variable
    factorial = 1;

    //Le pido al usuario un numero
    printf("Dame un numero:");
    scanf("%i",&num);

    //Establezco que solamente puede funcionar si el numero introducido no es 0
    if (num!=0) {

        //Hago una copia del valor entregado por el usuario
        int num2 = num;

        //Empiezo el loop
        while (num2 > 0) {
            //Establezco que el factorial es igual a este numero por num2
            factorial *= num2;
            //Establezco que cada que reinicie el loop, a num2 se le resta 1
            num2 = num2 - 1;
        }
    }
    //Le muestro los resultados al usuario
    printf ("El factorial de %i es %i", num, factorial);
    return 0;
}



return 0;
}