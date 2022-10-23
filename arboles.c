#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arboles.h"
#define TAM 100

struct ArbolesEstruc{

     char nombre[20];
     int edad;
     float altura;

};

ArbolesP cargararbolvacio(){

     ArbolesP a=malloc(sizeof(struct ArbolesEstruc));

     a->edad=-1;
     a->altura=-1.11;
     strcpy(a->nombre," #SIN DATOS# ");

return a;

};

void cargararbolesvacios(ArbolesP a[]){

     for(int i=3;i<TAM;i++){

        a[i]=cargararbolvacio();

     }

};

ArbolesP leerarboles(ArbolesP a[]){

     ArbolesP ar=malloc(sizeof(struct ArbolesEstruc));

     int i=0;

     FILE * archivo = fopen("datos.txt","r");

     while(!feof(archivo)){

        char datos[100]="";

        fgets(datos,100,archivo);

        a[i]=transformardatos(datos);

      i++;
     }
     fclose(archivo);

return ar;
};

ArbolesP transformardatos(char t[100]){

       ArbolesP a=malloc(sizeof(struct ArbolesEstruc));

       int posdelimitadoruno=-1;

       for(int i=0;i<100;i++){

         if(t[i]==';'){

            posdelimitadoruno=i;
            i=100;
         }
       }

       int posdelimitadordos=-1;

       for(int i=posdelimitadoruno+1;i<100;i++){

          if(t[i]==';'){

            posdelimitadordos=i;
            i=100;
          }
       }

       char nombreaux[20]="";

       for(int i=0;i<posdelimitadoruno;i++){

           nombreaux[i]=t[i];
       }

       char edadaux[4]="";

       for(int i=posdelimitadoruno+1;i<posdelimitadordos;i++){

           edadaux[i-posdelimitadoruno-1]=t[i];
       }

       char alturaaux[5]="";

       for(int i=posdelimitadordos+1;i<posdelimitadordos+5;i++){

            alturaaux[i-posdelimitadordos-1]=t[i];
       }

       strcpy(a->nombre,nombreaux);
       a->edad=atoi(edadaux);
       a->altura=atof(alturaaux);

return a;
};


void mostrararbol(ArbolesP a){

    if(a->edad!=-1){
       printf("\n Nombre del arbol: %s // Edad: %d // Altura: %.2f \n",a->nombre,a->edad,a->altura);

     }
};

void mostrararboles(ArbolesP a[]){

    printf("\n======================================================================\n");

    for(int i=0;i<TAM;i++){

        mostrararbol(a[i]);

    }

};

int busquedaarbolvacio(ArbolesP a[]){

     int posvacia=-1;

     for(int i=0;i<TAM;i++){

        if( a[i]->edad ==-1){

            posvacia=i;
            i=TAM;
        }
     }
return posvacia;
}

void agregararboles(ArbolesP a[],char n[20],int e,float al){

    int posvacia=busquedaarbolvacio(a);

    if(posvacia!=-1){

        a[posvacia]->edad=e;
        a[posvacia]->altura=al;
        strcpy(a[posvacia]->nombre,n);

    };

};

void modificararbol(ArbolesP a[]){

     printf("\n======================================================================\n");

    for (int i=0;i<TAM;i++){

        if(strcmp(a[i]->nombre,"Laurel")==0){

            printf("\n- Ingrese una nueva edad para el Laurel: ");
            scanf("%d",&(a[i]->edad));
            printf("\n- Ingrese una nueva altura para el Laurel: ");
            scanf("%f",&(a[i]->altura));

        }

    }


};


void eliminararboles(ArbolesP a[]){

   for(int i=0;i<TAM;i++){

       if((strcmp(a[i]->nombre,"Cocotero")==0)||(strcmp(a[i]->nombre,"Falsa Acacia")==0)){

            a[i]->edad=-1;
            a[i]->altura=-1.11;
            strcpy(a[i]->nombre," #SIN DATOS# ");

       }
   }
};

void escribirarboles(ArbolesP a[]){

    //int i=0;

    FILE * archivo=fopen("datos.txt","a");

    for(int i=0;i<TAM ;i++){

       if(a[i]->edad!=-1){
         fprintf(archivo,"\n Nombre del arbol: %s//Edad: %d//Altura: %.2f",a[i]->nombre,a[i]->edad,a[i]->altura);

       }
    }

};
