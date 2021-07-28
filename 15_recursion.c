// Rescurions is a prcoess when a function calls a copy of itself to work on a smaller problem

#include<stdio.h>

int fact(int num){
    if (num==1 || num==0)
    {
        return 1;
    }
    else{
        return (num * fact(num - 1));
    }
    
}
int main(){
    int num;
    printf("ENTER ANY NO.\n");
    scanf("%d",&num);
    printf("The factorial of %d is %d\n",num,fact(num));
    return 0;
}