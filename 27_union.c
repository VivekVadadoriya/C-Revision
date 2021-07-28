// Union is similiar to structure
// The only diff. is, In structure, each member has its own storage location.
// Wheras member of union uses a single shared memory.
// The single shared memory location is equal to the size of its largest data memory.

#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav;
    char name[34];
};

int main()
{
    union Student s1;
    s1.id = 1;
    s1.fav = 'u';
    strcpy(s1.name, "Vivek");
    s1.marks = 45;

    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav is %c\n", s1.fav);
    printf("The name is %s\n", s1.name);

    return 0;
}