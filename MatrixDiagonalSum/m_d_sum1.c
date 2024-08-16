#include <stdio.h>
int main()
{
    int i, j, n, sum = 0;
    scanf("%d", &n);
    int m[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
                sum += m[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}