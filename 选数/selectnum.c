#include <stdio.h>
void main()
{
    printf("输入n(1<=n<=20)和k(k<n): ");
    int n, k = 0;
    scanf("%d %d", &n, &k);
    while (!(n >= 1 && n <= 20 && n > k))
    {
        printf("请重新输入n和k: ");
        scanf("%d %d", &n, &k);
    }
    int a[n];
    printf("输入%d个整数", n);
    scanf("(%d )*n")
}