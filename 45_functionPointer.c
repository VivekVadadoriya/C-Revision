// We can have pointers pointing to function as well.
/*
#include<stdio.h>

int sum(int a, int b){
    return a + b;
}
int main()
{
    int (*fptr) (int, int);
    fptr = &sum;
    int d = (*fptr) (4, 6);
    printf("The value of d is %d\n", d);
    
    return 0;
}
*/
// Unlike normal pointers, we donot allocate/de-allocate memory using function pointers.
// Call Back Function
// Function pointers are used to pass a function to function.

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}
void greetHello(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of a and b is is %d", fptr(5, 7));
}
void greetGM(int (*fptr)(int, int))
{
    printf("GM user\n");
    printf("The sum of a and b is is %d", fptr(5, 7));
}
int main()
{
    int(*ptr)(int, int);
    ptr = sum;
    greetGM(ptr);
    return 0;
}