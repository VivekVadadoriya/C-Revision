#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    else if (strcmp(operation, "sub") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if (strcmp(operation, "mul") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    else if (strcmp(operation, "div") == 0)
    { 
        printf("%d\n", num1 / num2);
    }
    return 0;
}
