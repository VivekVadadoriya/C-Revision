// A pointer to a freed memory location or the location whose content has been deleted is called a dangling pointer.

// 1. Deallocation of memory.


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char *str = "Hi Harry!";
//     int a;
//     int *ptr  = (int *) malloc(sizeof(int));
//     free(ptr); // ptr now becames a dangling pointer.
//     ptr = NULL; // ptr no longer dangling.
//     return 0;
// }

// 2. Returning local variable in function calls

// #include<stdio.h>
// int *myFunc() {
//     // a is local variable and goes out of scope on function return over.
//     int a = 34;
//     return &a;
// }

// int main()
// {
//     int *ptr = myFunc(); // ptr points to invalid location.
//     printf("%d", *ptr);
//     return 0;
// }

// 3. Variable going out of scope.

// #include<stdio.h>
// int main()
// {
//     int *ptr;
//     {
//         int = 0;
//         ptr = &i; // ptr points to invalid location.
//     }
//     // ptr is now a dangling pointer
//     printf("%d", *ptr);
    
//     return 0;
// }

// We can avoid issues caused by dangling pointers by initializing pointer to NULL.
