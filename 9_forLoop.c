#include<stdio.h>

int main(){
    int a;
    printf("Enter any no.\n");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}