#include "listitem.h"
#include <stdbool.h>

typedef struct 
{
    ListItems *products;
    int type;
    int id;
    int sum;
}Box;

typedef struct
{
    Box **box[2];
    int quantity_box[2];
    int total_boxes;
    int total_products;
}Dispatch;

Dispatch *newDispatch();
void dispatch(Dispatch*,int valor,int peso);
void addProduct(Box *box,Item item,int type);
void print(Dispatch *d,int type);
void printAll(Dispatch *d);
void deleteDispatch(Dispatch *d);