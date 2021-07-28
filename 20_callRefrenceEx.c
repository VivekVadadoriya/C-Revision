#include <stdio.h>

void changeItBro(int *x, int *y){
    *x = *x + *y;
    *y = *x - *y - *y;
    }
int main()
{
    int a = 7, b = 3;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    changeItBro(&a,&b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}