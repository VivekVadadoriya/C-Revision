// For alternating name to given data type.
// Syntax: typedef <previous name> <alias name>;

// #include<stdio.h>
// int main()
// {
//     typedef unsigned long vi;
//     typedef int in;
//     in a=44;
//     vi li,l2,l3;
//     printf("%d",a);
    
//     return 0;
// }

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
}ss;
#include<stdio.h>
int main()
{
    ss s1,s2;
    s1.id =56;
    s2.id = 46;
    printf("%d\n",s1.id);
    printf("%d\n",s2.id);
    
    
    return 0;
}