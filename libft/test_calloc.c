#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    void *s;

    s = calloc(65537, 65537);
    printf("Pointer: %p\n", s);

    usleep(10000000);

    free(s);
    return (0);
}