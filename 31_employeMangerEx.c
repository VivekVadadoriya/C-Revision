#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int chars, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("Employe %d: Enter the no. of char. in your Employee id\n", i + 1);
        scanf("%d", &chars);
        ptr = (char *) malloc((chars+1) *sizeof(char));
        printf("Enter your employe ID\n");
        scanf("%s", ptr);
        printf("Employe id is %s\n",ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}