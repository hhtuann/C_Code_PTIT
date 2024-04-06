#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuann "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int gt[20] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int StrongNum(int n)
{
    int sum = 0;
    int tmp = n;
    while (n)
    {
        sum += gt[n % 10];
        n /= 10;
    }
    if (sum == tmp)
        return 1;
    return 0;
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (StrongNum(i))
            printf("%d ", i);
    }
    return 0;
}