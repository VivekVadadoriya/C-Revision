/*
Array is a collection of data item of the same type.
Array = Dabba.
Items are stored at contiguous memory locations.
1D is a list. 2D is a table.
Each element of an array is of same size.
Syntax: Data_Type name[size];
*/

#include <stdio.h>

// 1D Array
/*
int main(){
    int marks[4];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d\n",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i,marks[i]);
    }
    
    return 0;
}
*/

//2D Array

int main()
{
    int marks[2][4] = {{45, 34, 45, 56},
                       {23, 34, 45, 56}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
    {
        printf("The value of %d and %d is %d\n", i,j, marks[i][j]);
    }   
    printf("\n");
    }

    return 0;
}