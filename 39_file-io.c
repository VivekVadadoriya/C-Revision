// When working with files, we have to declare a pointer of type FILE.
// Opening a file.
// Syntax: ptr = fopen("filename", "mode");
// Closing a file is accomplished by the library function fclose().
// Syntax: fclose(ptr);
// In order to read a file, we can use a fscanf function.
// Syntax: fscanf(ptr, "%s", string);
// Similarly for writing a file use fprintf() function.


#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[34];
    char string1[34] = "This content is written.";

    // Reading a file.
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("%s", string);

    // Writing a file...
    // ptr = fopen("myfile.txt", "w");
    // fprintf(ptr, "%s", string1);
    
    return 0;
}