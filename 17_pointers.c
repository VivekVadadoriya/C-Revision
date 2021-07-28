/*
Variable which stores the address of another variable is called pointers.
Can be of any type.
Pointer in c can be declared using *.
Syntax: int *ptr = &var;
The address of operator "&" returns the address of a variable.
* is the defence operator used to get the value at a given address.
A pointer that is not assisgned any value but NULL is know as the NULL pointer.
Syntax: int *ptr = NULL;
Uses of a pointer:-
Dynamic memory allocation.
Returns multiple values from a function.
Pointer reduces the code and improves the performance.
*/

#include <stdio.h>

int main()
{
    int a = 76;
    int *ptra = &a;
    ptra = &a; // both work
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The address of pointer to a is %p\n", &ptra);

    return 0;
}