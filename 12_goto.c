// goto
#include <stdio.h>

int main()
{
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("\n%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the no. Press 0 to exit.");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
    }
    end:
    return 0;
}