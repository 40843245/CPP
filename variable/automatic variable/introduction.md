# Automatic variable in C++
## Introduction
For the user of the article whose title is "Difference between static, auto, global and local variable in the context of c and c++"

https://stackoverflow.com/questions/13415321/difference-between-static-auto-global-and-local-variable-in-the-context-of-c-a

    Automatic variables (pedantically, variables with automatic storage duration) are local variables whose lifetime ends when execution leaves their scope, and are recreated when the scope is reentered.

For example:

    for (int i = 0; i < 5; ++i) {
      int n = 0;
      printf("%d ", ++n);  // prints 1 1 1 1 1  - the previous value is lost
    }

## Ref
A very clear and detailed explanation.

https://stackoverflow.com/questions/13415321/difference-between-static-auto-global-and-local-variable-in-the-context-of-c-a
