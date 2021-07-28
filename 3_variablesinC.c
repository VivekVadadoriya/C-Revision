// Static variable preservers its value even when they go out of the scope.
// They preserve their value from the previous scope and are not  inintialized again.
// Static var. are initialized automatically to 0. if not initialized.
// Static variable need constant values to be stored in.

#include<stdio.h>
int main()
{
   static int a;
    printf("%d",a);
    
    return 0;
}