#include <stdio.h>

void revArray(int array[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        //swap item i with item (6-i)
        temp = array[i];
        array[i] = array[6-i];
        array[6-i] = temp;
    }
    
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 89};

    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", array[i]);
    }

    revArray(array);

    printf("After reversing\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}