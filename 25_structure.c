// Structure allow us to combine data of different types together.
// It is used to create a complex data type which contain diverse information.
/*
Syntax: 
struct name {
    int var 1;
    char var 2;
} s1,s2,s3;
Structure member are accesed using dot [.] operatot.
To access simply write structureName.member.Name.

*/

#include<stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct Student vivek, ravi, lol;
    vivek.id =1;
    ravi.id = 2;
    lol.id = 3;
    vivek.marks = 99;
    ravi.marks = 89;
    lol.marks = 79;
    vivek.fav_char = 'p';
    ravi.fav_char = 'p';
    lol.fav_char = 'p';

    printf("Vivek got %d marks\n",vivek.marks);
    
    return 0;
}