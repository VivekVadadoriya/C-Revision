// Void pointer is a pointer that has no data type associated with it.
// A void pointer can be easily typecasted to any pointer type.
// In dynamic memory allocation, malloc() and calloc() return (void *) type pointer.
// It is not possible to dereferance void pointers.
// Pointer arithmetic is not allowed in C standards with void pointer.


#include<stdio.h>
int main()
{
    int a= 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *( (int *) ptr));
    ptr = &b;
    printf("The value of b is %f\n", *( (float *) ptr));  
    
    return 0;
}