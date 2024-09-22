#include <stdio.h>

int main()
{
    int cookie;
    char buffer[4];

    printf("buffer: %08p cookie: %08p\n", &buffer, &cookie);

    gets(buffer);

    if(cookie == 0x41424344)
        printf("\nGanaste\n");
    else
        printf("\nPerdiste\n");
}