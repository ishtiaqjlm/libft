#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    printf("%d\n", atoi("--5"));
    printf("%d\n", atoi("+-5"));
    printf("%d\n", atoi("++5"));
    printf("%d\n", atoi("   -42abc"));
    return (0);
}
