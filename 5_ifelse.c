#include<stdio.h>

int main(){
    int age;
    printf("Enter your age.\n");
    scanf("%d",&age);
    
    printf("Your entered age is %d\n",age);
    if (age>=18)
    {
        printf("You can Vote");
    }
    else{
        printf("You cannot vote");
    }
    
    return 0;
}