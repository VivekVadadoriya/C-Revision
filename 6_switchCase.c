#include<stdio.h>

int main(){
    int n;
    printf("Enter any no.\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("No. is 1.");
        break;
    case 2:
        printf("No. is 2.");
        break;
    case 3:
        printf("No. is 3.");
        break;
    case 4:
        printf("No. is 4.");
        break;
    
    default:
        printf("Wrong no.");
        break;
    }
    return 0;
}