#include <stdio.h>

int main()
{
    long long a;

    scanf("%lld", &a);

    printf((a % 2 == 1) ? "ODD\n" : "EVEN\n");

    return 0;
}