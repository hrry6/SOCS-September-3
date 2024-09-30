#include <stdio.h>

int main()
{
    long long a,b,c,d;
    
    scanf("%lld %lld %lld %lld", &a, &b,&c,&d);
    printf(((a * b) > (c + d)) ? "True\n" : "False\n");

    return 0;
}