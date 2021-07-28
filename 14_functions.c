// Function Syntax
// return_type function_name (data_type para 1, data_type para 2) {
//     code
// return 0;
// }
// In function always remember that, declare, define and call.

#include<stdio.h>

// Declararion - declare before a main function

int sum(int a,int b);
void printstar(int n);
int takenumber();
void wawr();

// Call a function

int main(){
    int a,b,c,d,e;
    a= 9;
    b= 87;
    c= sum(a,b);
     printf("%d\n",c);
     printstar(7);
    d=takenumber();
    printf("The No. is %d\n",d);
    wawr();
    return 0;
}

// Definition - define it.

int sum(int a,int b){
    return a+b;
}

void printstar(int n){
    for (int i = 0; i < n; i++)
    {
        printf("*\t");
    }
    
}

int takenumber(){
    int i;
    printf("Enter any no.");
    scanf("%d",&i);
    return i;
}

void wawr(){
    printf("*");
}