#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arboles.h"
#define TAM 100

int main()
{


    ArbolesP a1[TAM];

    leerarboles(a1);

    cargararbolesvacios(a1);

    agregararboles(a1,"Laurel",210,2.55);
    agregararboles(a1,"Secuoya Caucho",150,1.99);
    agregararboles(a1,"Gikgo Biloba",90,1.88);

    mostrararboles(a1);

    modificararbol(a1);

    mostrararboles(a1);

    eliminararboles(a1);

    mostrararboles(a1);

    escribirarboles(a1);

    return 0;
}
