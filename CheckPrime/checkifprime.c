#include <stdio.h>
#include <stdbool.h>
bool checkIfPrime(int x);
int main()
{
    int x = 0;
    printf("Input: ");
    // while (scanf("%d", &x) == 0 || getchar() != '\n' || x < 2)
    // {
    //     printf("Input Num Again: ");
    //     while (getchar() != '\n')
    //         ;
    // }
    scanf("%d", &x);
    if (checkIfPrime(x))
        printf("Y");
    else
        printf("N");
    return 0;
}
bool checkIfPrime(int x)
{
    int i;
    for (i = 2; i < x; i++)
        if (x % i == 0)
            break;
    if (x == i || x == 2)
        return true;
    else
        return false;
}