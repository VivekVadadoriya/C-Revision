// ::: Break - Come out of the function when condition concides :::
#include<stdio.h>

int main(){
    int a,i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\nEnter your age\n",i);
        scanf("%d",&a);
        if (a>10)
        {
            break;
        }
        
    }
    

    return 0;
}