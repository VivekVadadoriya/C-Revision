// There are four phases for a C program to became an executable.

// 1. PreProcessing :
// Revoval of comments.
// Expansion of macros.
// Includes files.

// 2. Compilation.
// Assembly level instruction are generated.

// 3. Assembly.
//.exe
// Print are noty resolved.
// Assembly code are converted to machine level code.

// 4. Linking.
// Links the function implementation.


// What is C preprocessor ?
// C preprocessor comes before the actual compilation process.
// C preprocessor is not a part of the c compiler.
// All preprocessor commands begin with a hash symbol #.
// Examples :
// #define, #include, #undef, #ifdef, #ifndef, #if, #else, #endif.

// More and more......

// #include directive fetch the content of some other file to be included in the present file.
// #define is used to "define" preprocessor "variable".
// Ex. #define pi 3.14
// Ex. #define square(x) x*x

// Predefined macros in C.

// 1. __DATE__ ---- Date char. literal in "MMM DD YYYY" format.
// 2. __TIME__ ---- Current time as "HH:MM:SS" format.
// 3. __FILE__ ---- Current file name as string literal.
// 4. __LINE__ ---- Current line number as decimal constant.
// 5. __STDC__ ---- DEfined as 1 when the compiler compiles with ANSI standard.

