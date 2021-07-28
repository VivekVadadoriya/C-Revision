// ::: Passing arrays to functions :::

/*
We can pass the arrays to a function :

1. By declaring array as a parameter in function.
    Eg. int average(int arr[]) {}

2. By declaring a pointer in  a function to hold the base address of the array.
    Eg. int sum(int *ptra)
    
*/

#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0] = 43; ::: Very important if you change value then it will
    // reflects in main function. :::

    return 0;
}

void func2(int *ptra)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("The value at %d is %d\n",i,ptra[i]);
        printf("The value at %d is %d\n", i, *(ptra + i));
    }
    *(ptra + 2) = 34;
}

void func3(int arr[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d, %d is %d\n", i,j,arr[i][j]);
        }
    }
}

int main()
    {
        int arr[] = {1, 2, 3, 4};
        int arrr[2][2] = {{2,13},{9,3}};
        // printf("The value of at index is %d\n",arr[0]);
        // func1(arr);
        // printf("The value of at index is %d\n",arr[0]);
        // func2(arr);
        func3(arrr);
        return 0;
    }