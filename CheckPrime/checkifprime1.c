#include <stdio.h>
int main()
{
    int x = 0;
    scanf("%d", &x);

    int i;
    for (i = 2; i < x; i++)
        if (x % i == 0)
            break;
    if (i == x || x == 2)
        printf("Y");
    else
        printf("N");
}
