/**
Practice 1-2: add \c into printf function, see what will happen
*/

#include <stdio.h>

int main()
{
    printf("hello, world\n\c");
}

/**
[Result]:

prac1-2.c:9:27: warning: unknown escape sequence '\c'
    printf("hello, world\n\c");
                          ^~
1 warning generated.
*/
