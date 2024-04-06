#include <stdio.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int main()
{
    // input
    int n;
    scanf("%d", &n);
    int odd = 0;
    int even = 0;
    while (n)
    {
        int a = n % 10;
        if (a % 2)
            odd++;
        else
            even++;
        n /= 10;
    }
    printf("%d %d", odd, even);
    return 0;
}
