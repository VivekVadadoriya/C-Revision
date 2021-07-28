// ::: Do While :::

#include<stdio.h>

int main(){
    int a, index=0;
    printf("Enter any no.\n");
    scanf("%d",&a);
    do
    {
        printf("%d\n",index);
        index = index + 1;
    } while (index<a);
    
    return 0;
}