#include <stdio.h>

int main()
{
    int x=10;
    int *p = &x;
    
    printf("Value of x: %d\n",x);
    //address print korte void* lekha laage
    printf("Address of x: %p\n",(void*)&x); 
    printf("Adress stored in ptr: %p\n",(void*)p);
    printf("Value of x using ptr: %d\n",*p);
    
    *p=20;
    
    printf("updated Value of x: %d\n",x);
    //address print korte void* lekha laage
    printf("updated Address of x: %p\n",(void*)&x); 
    printf("updated Adress stored in ptr: %p\n",(void*)p);
    printf("updated Value of x using ptr: %d\n",*p);
    
    
    return 0;
}
