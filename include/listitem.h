#include <stdio.h>
#include <stdlib.h>

//0 = value
//1 = weight

typedef struct
{
    int values[2];
    int id;
}Item;

typedef struct
{
    Item *items;
    int size;  
    int lastId; 
}ListItems;

ListItems * newList();
void _addItem(ListItems *list, Item item);
void deleteList(ListItems *list);
Item makeItem(int valor,int peso,int id);
void printList(ListItems *list);