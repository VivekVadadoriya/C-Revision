// It is a way in which the size of a data structure can be changed during the runtime.
// Memory reusability and the allocated memory can be free when not required.


// Function of Dynamic Memory Allocation.

// 1. malloc --- Memory allocation
/*
It reserves a block of memory with the given amount of bytes.
The return value is a void pointer to the allocated space.
If the space is insufficient, allocation of memory fails and it returns a NULL pointer.
All the values at allocated memory are initialized to garbage values.
Syntax,
        ptr = (ptr-type*) malloc(size-in-bytes)
    Eg.
        int *ptr;
        ptr = (int*) malloc(3 * sizeof(int))
*/

// 2. calloc --- Contiguos Allocation
/*
It reserves n block of memory with the given amount of bytes.
The return value is a void pointer to the allocated space.
If the space is insufficient, allocation of memory fails and it returns a NULL pointer.
All the values at allocated memory are initialized to 0.
Syntax,
        ptr = (ptr-type*) calloc(n, size-in-bytes)
    Eg.
        int *ptr;
        ptr = (int*) calloc(10, 3 * sizeof(int))
*/

// 3. realloc --- Reallocation
/*
If the dynamic allocated memory is insufficient we can change the size of previus allocated memory,
using realloc() function.

Syntax:
        ptr = (ptr-type) realloc(ptr, new-size-in-bytes)
*/

// 4. free --- free the allocated memory
/*
If the dynamically allocated memory is not required anymore, we can free it using free function.
This will free the memory being used by the program in the heap.

Syntax:
        free(ptr)
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
        // // Use of malloc
        // int *ptr;
        // ptr = (int*) malloc(3 * sizeof(int));
        // for (int i = 0; i < 3; i++)
        // {
        //         scanf("%d",&ptr[i]);
        // }
        // for (int i = 0; i < 3; i++)
        // {
        //         printf("The value at %d of this array is %d\n",i, ptr[i]);     
        // }
        
        //  // Use of calloc
        // int *ptr;
        // int n;
        // printf("The value of n");
        // scanf("%d",&n);
        
        // ptr = (int*) calloc(n, sizeof(int));
        // for (int i = 0; i < n; i++)
        // {
        //         scanf("%d",&ptr[i]);
        // }
        // for (int i = 0; i < n; i++)
        // {
        //         printf("The value at %d of this array is %d\n",i, ptr[i]);        
        // }

        // Use of realloc
        // use old calloc or malloc
        int *ptr;
        int n;
        printf("The value of n");
        scanf("%d",&n);
        
        ptr = (int*) realloc(ptr, n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
                scanf("%d",&ptr[i]);
        }
        for (int i = 0; i < n; i++)
        {
                printf("The value at %d of this array is %d\n",i, ptr[i]);       
        }
        
        return 0;
}