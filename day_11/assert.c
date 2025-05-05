// #include <assert.h>
// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     assert(0);
//     printf("my program runs\n");
//     return 0;
// }

// assertion failed: 0, file assert.c, line 7

#define NDEBUG // goes before <assert.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    assert(0);
    printf("my program runs\n");
    return 0;
}