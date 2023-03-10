5 types of Errors in C:

1) Syntax error.
2) Run time error.
3) Logical error.
4) Semantic error.
5) Linker error.


1) Syntax error: Syntax errors occur when a programmer does not follow the set of rules defined for the syntax of C language.

Syntax errors are sometimes also called compilation errors because they are always detected by the compiler. Generally, these errors can be easily identified and rectified by programmers.

The most commonly occurring syntax errors in C language are:
Missing semi-colon (;)
Missing parenthesis ({})
Assigning value to a variable without declaring it
Example:

#include <stdio.h>
int main(){
    printf("Hello Phitron")

    return 0;
}

2) Run time error: Runtime errors can be a little tricky to identify because the compiler can not detect these errors. They can only be identified once the program is running. Some of the most common run time errors are: number not divisible by zero, array index out of bounds, string index out of bounds, etc.

Runtime errors can occur because of various reasons. Some of the reasons are:

a) Mistakes in the code.
b) Memory leaks.
c) Mathematically incorrect operations.
d) Undefined variables.
Example:

#include<stdio.h>
int main(){
    int num = 2147483649;
    printf("%d\n", num);

    return 0;
}

3) Logical error: Sometimes, we do not get the output we expected after the compilation and execution of a program. Even though the code seems error free,
the output generated is different from the expected one. These types of errors are called Logical Errors.
Logical errors are those errors in which we think that our code is correct, the code compiles without any error and gives no error while it is running,
but the output we get is different from the output we expected.
Example:

#include <stdio.h>
int main(){
    int n = 10;
    if(n % 2 = 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

    return 0;
}

4) Semantic error: Errors that occur because the compiler is unable to understand the written code are called Semantic Errors.
A semantic error will be generated if the code makes no sense to the compiler, even though it is syntactically correct.
It is like using the wrong word in the wrong place in the English language. For example,
adding a string to an integer will generate a semantic error.
Example:

#include <stdio.h>
int main(){
    int n = 5;
    int arr[] = {3, 6, 11, 5, 9};
    for (int i = 0; i <= n; i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}


5) Linker error: Linker is a program that takes the object files generated by the compiler and combines them into a single executable file.
Linker errors are the errors encountered when the executable file of the code can not be generated even though the code gets compiled successfully.
This error is generated when a different object file is unable to link with the main object file.
We can run into a linked error if we have imported an incorrect header file in the code,
we have a wrong function declaration, etc.
Example:

#include <stdio.h>
int Main() {
    int num = 10;
    printf("%d\n", num);
}
