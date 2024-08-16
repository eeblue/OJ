#include <stdio.h>
int main()
{
    int m[10][10], n, sum, i, j = 0;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input Num: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    // for (i = 0; i < n; i++)
    // {
    //     printf("|");
    //     printf(" ");
    //     for (j = 0; j < n; j++)
    //         printf("%d ", m[i][j]);
    //     printf("|");
    //     printf("\n");
    // }
    for (i = 0, j = 0; i < n, j < n; i++, j++)
    {
        sum += m[i][j];
        sum += m[i][-j + n - 1];
    }
    if (n % 2)
        sum -= m[n / 2][n / 2];
    printf("%d", sum);
}