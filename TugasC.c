#include <stdio.h>

int main()
{
    long long a, c;
    scanf("%d", &a);

    long long b[2][a];

    for(int i = 1; i <= a; i++)
    {
        scanf("%lld %lld", &b[0][i], &b[1][i]);
    }

    for(int i = 1; i <= a; i++)
    {
        printf("Case #%d: %s\n", i, (b[0][i] > b[1][i]) ? "Go-Jo" : "Bi-Pay" );
    }

    return 0;
}