/*
String is not a data type.
We express strings using an array of char. terminated by a null character(\0).
Syntax:
char name[] = "Vivek";
char name[] ={'v','i','v','e','k','\0'}
*/

// void printStr(char str[]){
//     int i=0;
//     while (str[i]!='\0')
//     {
//         printf("%c",str[i]);
//         i++;
//     }
// }

#include<stdio.h>
int main()
{
    // char str[] = {'v','i','v','e','k','\0'};
    // char str[6] = "Vivek";
    char str[34];
    gets(str);
    // printStr(str);
    printf("Using printf %s\n",str);
    // puts(str);
    return 0;
}