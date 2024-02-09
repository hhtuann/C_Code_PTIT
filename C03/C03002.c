#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf (int)(1e9 + 7)
#define nmax (int)(1e6 + 7)
/* ...............................
hhtuann._
______ Hoang Hoang Tuan ______
_ Take Off Toward Your Dream ! _
............................... */
int prime[1000006] = {0};
void isPrime(int n)
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}
int main()
{
    // input
    int n;
    scanf("%d", &n);
    isPrime(n);
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}