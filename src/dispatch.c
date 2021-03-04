#include "../include/dispatch.h"
// 0 é por valor e 1 é por peso
int VALUES[] = {5,5};

Dispatch *newDispatch()
{
    //creating dispatch
    Dispatch *d = (Dispatch*)malloc(sizeof(Dispatch));
    d->box[0] = (Box**)malloc(sizeof(Box));
    d->box[1] = (Box**)malloc(sizeof(Box));
    d->quantity_box[0] = d->quantity_box[1] = 0;
    d->total_boxes = d->total_products = 0;
    return d;
}

Box *newBox(Dispatch *d,int type)
{
    //creating new box
    Box *new_box = (Box*)malloc(sizeof(Box));
    new_box->id = ++d->total_boxes;
    new_box->products = newList();
    new_box->type = type;
    new_box->sum = 0;
    d->quantity_box[type]++;
    return new_box;
}

void addProduct(Box *box,Item item,int type)
{
    //adding the product in the box
    box->sum+=item.values[type];
    _addItem(box->products,item);
}

void dispatch(Dispatch *d,int value,int weight)
{
    int type = value<weight?0:1;
    int index = d->quantity_box[type]-1;
    Item item = makeItem(value,weight,++d->total_products);
    Box **box = d->box[type];
    if(!(index+1)||box[index]->sum+item.values[type]>VALUES[type])
        box[++index] = newBox(d,type);
    addProduct(box[index],item,type);
}

void print(Dispatch *d,int type)
{
    printf("----------------\n");
    printf("Amount of box by ");
    printf(type?"weight":"value");
    printf(": %i\n",d->quantity_box[type]);
    Box **box = d->box[type];
    for(int i = 0; i < d->quantity_box[type];i++)
    {
        printf("****************\n");
        printf("ID Box: %i\n",box[i]->id);
        printf("****************\n");
        printList(box[i]->products);
    }
}

void printAll(Dispatch *d)
{
    print(d,0);
    print(d,1);
}

void deleteDispatch(Dispatch *d)
{
    Box **box;
    for(int i = 0; i < 2;i++)
    {
        box = d->box[i];
        for(int j = 0; j < d->quantity_box[i];j++)
            deleteList(box[j]->products);
        free(box[i]);
    }
    free(d);    
}