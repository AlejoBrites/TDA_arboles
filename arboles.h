#ifndef ARBOLES_H_INCLUDED
#define ARBOLES_H_INCLUDED

struct arbolesEstruct;

typedef struct ArbolesEstruc * ArbolesP;

ArbolesP cargararbolvacio();

void cargararbolesvacios(ArbolesP a[]);

ArbolesP leerarboles(ArbolesP a[]);

ArbolesP transformardatos(char t[100]);

void mostrararbol(ArbolesP a);

void mostrararboles(ArbolesP a[]);

void agregararboles(ArbolesP a[],char n[20],int e,float al);

void modificararbol(ArbolesP a[]);

void eliminararboles(ArbolesP a[]);

void escribirarboles(ArbolesP a[]);


#endif // ARBOLES_H_INCLUDED
