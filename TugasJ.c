#include <stdio.h>

int main()
{
    int a, b, c, d;

    scanf("%d %d %d", &a, &b, &c);

    if(a > c || b < c)
    {
        d = -1;
    }else
    {
        if(c - a > b -c)
        {
            d = c - a;
        }
        else{
            d = b -c;
        }
    }

    printf("%d\n", d);

    return 0;
}