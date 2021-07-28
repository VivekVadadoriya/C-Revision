#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("THe value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("Value at index %d is %s \n", i, argv[i]);
    }

    return 0;
}
