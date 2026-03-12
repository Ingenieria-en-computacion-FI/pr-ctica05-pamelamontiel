#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista* lista_crear()
{ 
   Lista *l;
   l=(Lista*)malloc(sizeof(Lista));
   l->head=NULL;
   l->tail=NULL;
   return l:
}
int lista_vacia(Lista* lista)
{
    
}

void lista_insertar_head(Lista* lista, int d)
{
   Nodo *NewNodo = (Nodo*)malloc(sizeof(Nodo)):
   NewNodo->dato=d;
   NewNodo->sig=lista->head
   lista->head=NewNodo;
   if (lista->tail=NULL);
    lista->tail=NewNode
}

void lista_insertar_tail(Lista* lista, int dato)
{
    /*
    TODO:

    1 Crear nuevo nodo
    2 Si lista está vacía:
        head y tail apuntan al nuevo nodo
    3 Si no:
        tail->siguiente apunta al nuevo nodo
        actualizar tail
    */
}

int lista_eliminar_head(Lista* lista)
{
    /*
    TODO:

    1 Si lista vacía regresar error (-1)
    2 Guardar nodo a eliminar
    3 Mover head al siguiente nodo
    4 Si lista queda vacía:
       tail = NULL
    5 Liberar nodo
    6 Regresar dato eliminado
    */

    return -1;
}

int lista_eliminar_tail(Lista* lista)
{
    /*
    TODO:

    1 Si lista vacía regresar error
    2 Si solo hay un nodo:
        guardar dato
        liberar nodo
        head = NULL
        tail = NULL
    3 Si hay varios nodos:
        recorrer lista hasta el nodo anterior al tail
    4 actualizar tail
    5 liberar nodo eliminado
    6 regresar dato
    */

    return -1;
}

void lista_imprimir(Lista* lista)
{
    Nodo* actual = lista->head;

    while(actual != NULL)
    {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }

    printf("NULL\n");
}

void lista_destruir(Lista* lista)
{
    /*
    TODO:

    1 si la lista no esta vacia
    2 borrar el primero o el último 
    3 hacer que lista apunte a nulo
    */
}
