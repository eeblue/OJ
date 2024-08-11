#include <stdio.h>
#include <math.h>
int n, k, cnt = 0;
int a[21];
int prime(int x)
{                                   // 当然也可以这么
    for (int i = 2; i * i < x; i++) // 2 3 都不是质数，从4开始才是
    // for (int i = 2; i <= sqrt(x); i++) // 当为 2 是也满足，原因是 sqrt() 会对其开根
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
void dfs(int x, int sum, int num)
{
    if (num == k + 1)
    {
        if (prime(sum))
            cnt++;
        return;
    }
    for (int i = x; i <= n - k + num; i++) // 这样的方法是，进入时值自动加上，出来时,
    {                                      // sum 值不改变，可以达到恢复原状的情况
        dfs(i + 1, sum + a[i], num + 1);
    }

    //	for(int i = x;i <= n-k+num;i++)			//做一些改变情况多的题时，可以这么用
    //	{										//进入前要操作，出去时也操作
    //		sum += a[i];
    //		dfs(i+1,sum,num+1);
    //		sum -= a[i];
    //	}
}
int main()
{
    printf("input n&k:");
    scanf("%d %d", &n, &k);
    printf("input nums:");
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    dfs(1, 0, 1); // 别忘记数组的第一个可以不使用，这样带入 1 可能更利于之后的赋值问题
    printf("%d\n", cnt);
    return 0;
}
