/*
int a=2;
a++;
then a = 3;
but in pointer,
int *ptra = &a;
ptra = ptra +1;
Then it will increment size of (Int).
*/

// #include<stdio.h>
// int main()
// {
//     int a = 34;
//     int *ptra = &a;
//     printf("%d\n",ptra);
//     printf("%d",ptra + 2);
//     return 0;
// }


// /*
// &arr[i]== *(arr + i)
// if arr is pointer to arr[0] then arr +i is a pointer to arr[i]. 
// */

#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The address of the first element of array is %d \n", &arr[0]);
    printf("The address of the first element of array is %d \n", arr);
    printf("The address of the second element of array is %d \n", &arr[1]);
    printf("The address of the second element of array is %d \n", arr + 1);

    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The value at address of the first element of array is %d \n", *(&arr[0]));
    printf("The value at address of the first element of array is %d \n", *(arr));
    printf("The value at address of the second element of array is %d \n", *(&arr[1]));
    printf("The value at address of the second element of array is %d \n", *(arr + 1));

    return 0;
}
