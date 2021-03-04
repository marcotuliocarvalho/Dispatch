#include "../include/listitem.h"

ListItems * newList()
{
    ListItems *lista = (ListItems*)malloc(sizeof(ListItems));
    lista->items = NULL;
    lista->size = 0;
    lista->lastId = 0;
    return lista;
}

void _addItem(ListItems *list, Item item)
{
    int size = ++list->size;
    if(!(size-1))
        list->items = (Item*)malloc(sizeof(Item));
    else
        list->items = (Item*)realloc(list->items,size*sizeof(Item));
    list->items[size-1] = item;
}

Item makeItem(int valor,int peso,int id)
{
    Item item;
    item.id = id;
    item.values[0] = valor;
    item.values[1] = peso;
    return item;
}

void printList(ListItems *list)
{
    for(int i = 0; i < list->size;i++)
    {
        printf("ID: %i ",list->items[i].id);
        printf(";Value: %i ",list->items[i].values[0]);
        printf(";Weight: %i\n",list->items[i].values[1]);
    }
}

void deleteList(ListItems *list)
{
    free(list->items);
    free(list);
}