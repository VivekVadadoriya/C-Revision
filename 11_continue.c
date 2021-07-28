// Continue : To skip from iteration.
#include<stdio.h>

int main(){
    int a,i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n",i);
        scanf("%d",&a);
        if (a>10)
        {
            continue;
        }
        printf("We have not come accros any continue statement");
        
    }
    

    return 0;
}