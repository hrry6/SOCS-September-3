#include <stdio.h>

int main()
{
    int a, c, d;

    scanf("%d", &a);
    
    int b[3][a];

    for(int i = 1; i<=a; i++)
    {
        scanf("%d %d %d", &b[0][i], &b[1][i], &b[2][i]);
    }

    for(int i = 1; i <= a; i++)
    {
        d = (b[0][i] * b[1][i] / 100);
        if ( d >= b[2][i] ) 
        {
          c = b[2][i];  
        }else
        {
           c = d;
        }

        printf("Case #%d: %d\n", i, c);
    }

    return 0;
}