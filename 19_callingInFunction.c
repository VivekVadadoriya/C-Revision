/*
Call by Value VS Call by Refrence.

1.
When a function is called, the value that are passed in the call are called
arguments or actual parameters.

2.
Formal parameter are local variable which are assigned value
from the argument when the function is called.

Call by value:

When we call a function by value.it means we are passing the values of the 
arguments which are copied into the formal parameters of the function.
Which means the original one will remain unchanged and only the parameters inside
the functions changes.

Call by Refrence:

The call by refrence method of passing arguments to a C function copies the 
address of the arguments into the formal parameters.
Address of the actual arguments are copied and then assigned to the
coressponding formal arguments.
*/

// ::: Call by Refrence Example :::

#include <stdio.h>

void changeValue(int *add)
{
    *add = 3345;
}


int main()
{
    int a = 34, b = 56;
    printf("The value of a now is %d\n", a);
    changeValue(&a);
    printf("The value of a now is %d\n", a);
    return 0;
}