#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arboles.h"

int main()
{

    int t=100;

    ArbolesP a1[t];

    cargararbolesvacios(a1,t);

    leerarboles(a1,t);
    //mostrararboles(a1,t);

    a1[3]=agregararboles("Laurel",210,2.55);
    a1[4]=agregararboles("Secuoya Caucho",150,1.99);
    a1[5]=agregararboles("Gikgo Biloba",90,1.88);

    mostrararboles(a1,t);

    modificararbol(a1,t);

    mostrararboles(a1,t);

    eliminararboles(a1,t);

    mostrararboles(a1,t);

    escribirarboles(a1,t);

    return 0;
}
