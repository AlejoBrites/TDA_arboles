#ifndef ARBOLES_H_INCLUDED
#define ARBOLES_H_INCLUDED

struct arbolesEstruct;

typedef struct ArbolesEstruc * ArbolesP;

ArbolesP cargararbolvacio();

void cargararbolesvacios(ArbolesP a[],int tam);

ArbolesP leerarboles(ArbolesP a[],int tam);

ArbolesP transformardatos(char t[100]);

void mostrararbol(ArbolesP a);

void mostrararboles(ArbolesP a[], int tam);

ArbolesP agregararboles(char n[],int e,float al);

void modificararbol(ArbolesP a[], int tam);

void eliminararboles(ArbolesP a[], int tam);

void escribirarboles(ArbolesP a[],int tam);


#endif // ARBOLES_H_INCLUDED
