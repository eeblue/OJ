#include <stdio.h>
int selectPrime(int sum);
void selectNum(int no, int num);
int a[22], b[21], n, k, amount = 0;
int main()
{
    int i;
    scanf("%d %d", &n, &k);
    int b[k];
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    selectNum(n, k);
    printf("%d\n", amount);
}
int selectPrime(int sum)
{
    int i;
    for (i = 2; i < sum; i++)
        if (sum % i == 0)
            break;
    if (i == sum || sum == 2)
        return 1;
    else
        return 0;
}
void selectNum(int n, int m)
{
    int i, sum;
    if (m == 0)
    {
        sum = 0;
        for (i = 0; i < k; i++)
            sum += b[i];
        if (selectPrime(sum))
            amount++;
        return;
    }
    for (i = n; i >= m; i--)
    {
        b[m - 1] = a[i];
        selectNum(i - 1, m - 1);
    }
}
