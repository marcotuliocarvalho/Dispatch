#include "../include/dispatch.h"

int main()
{
    //creating new dispatch
    Dispatch *d = newDispatch();
    //dispatch products
    dispatch(d,2,3);
    dispatch(d,1,1);
    dispatch(d,1,2);
    dispatch(d,2,2);
    dispatch(d,4,2);
    dispatch(d,3,2);
    dispatch(d,1,2);
    dispatch(d,2,1);
    //Shows the distribution between the boxes
    printAll(d);
    //memory free
    deleteDispatch(d);    
    return 0;
}