#include<stdio.h>

int main(){
    int i=0,a;
    printf("Enter any no.");
    scanf("%d",&a);

    while (i<=a)
    {
        printf("%d \n",i);
        i= i + 1;
    }
    
    return 0;
}