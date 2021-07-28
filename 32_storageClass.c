/*
A storage class defines scope, default initial values & lifetime of a variable.
A storage class defines following attributes about a variable in c:
1. Scope -- Where will this variable be available ?
2. Default initial value --
3. Lifetime -- life of that variable.

Types of Storage classes in C:

1. Automatic Variable: ( Local Variable )
Scope: local to function body
Default Value: garbage value
Lifetime: till the end of the function block
A variable defined without any storage class specification is by default an automatic variable.
int vivek and auto int vivek are same.

2. External Variable: ( Global Variable )
Scope: Global to the program
Default Value: 0
Lifetime: Throughout the lifetime of the program.
Syntax: extern int vivek;
Recommend to min. use of it.

3. Static Variable:
Scope: Local to the block they are defined in.
Default Value: 0
Lifetime: Throughout the lifetime of the program.
Syntax: static int vivek;
Recommend to min. use of it.

4. Register Variable:
Scope: Local to function body.
Default Value: Garbage value.
Lifetime: Till the end of the function block.
Register variables requests the compiler to store the vaiable in the CPU register,
It store to have faster access.
*/