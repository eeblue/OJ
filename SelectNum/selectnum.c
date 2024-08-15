#include <stdio.h>
int prime(int sum);
void selectNum(int no, int num, int sum);
int a[22], n, k, amount = 0;
int main()
{
    int i;
    // printf("Input n&k(1<=n<=20, k<n): ");
    scanf("%d %d", &n, &k);
    // while (!(n >= 1 && n <= 20 && n > k))
    // {
    //     printf("Input n&k again: ");
    //     scanf("%d %d", &n, &k);
    // }
    // printf("Input  %d numbers: ", n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    selectNum(n, k, 0);
    printf("%d\n", amount);
}
int prime(int sum)
{
    int i;
    // printf("decide: sum=%d\n", sum);
    for (i = 2; i < sum; i++)
        if (sum % i == 0)
            break;
    if (i == sum || sum == 2)
        return 1;
    else
        return 0;
}
void selectNum(int n, int m, int sum)
{
    int i;
    if (m == 0)
    {
        if (prime(sum))
            amount++;
        return;
    }
    for (i = n; i >= m; i--)
    {
        // printf("before: i=%d m=%d sum=%d\n", i, m, sum);
        selectNum(i - 1, m - 1, sum + a[i]);
        // printf("after: i=%d m=%d sum=%d\n", i, m, sum);
    }
}
