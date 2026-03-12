#include <stdlib.h>
#include "nodo.h"

Nodo* nodo_crear(int d)
{
   
    Nodo *n;
    n=(Nodo*)malloc(sizeof(Nodo));
    n-> sig= NULL;
    n-> dato=d;
    return n;
 }


void nodo_destruir(Nodo* nodo)
{
    if(n->sig==NULL)
    free(nodo);
}
