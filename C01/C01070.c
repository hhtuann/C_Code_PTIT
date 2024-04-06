#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    // input
    int a, b, u, v, x, y;
    int rec[10];
    for (int i = 1; i <= 5; i += 2)
    {
        scanf("%d %d", &rec[i], &rec[i + 1]);
        if (rec[i + 1] > rec[i])
            swap(&rec[i], &rec[i + 1]);
    }
    if (rec[1] == rec[3] && rec[3] == rec[5] && rec[1] == rec[2] + rec[4] + rec[6])
    {
        printf("YES");
        return 0;
    }
    for (int i = 1; i <= 3; i += 2)
    {
        for (int j = i + 2; j <= 5; j += 2)
        {
            if (rec[i] < rec[j])
            {
                swap(&rec[i], &rec[j]);
                swap(&rec[i + 1], &rec[j + 1]);
            }
        }
    }
    for (int i = 0; i <= 1; i++)
    {
        if (i)
        {
            a = rec[1];
            b = rec[2];
        }
        else
        {
            a = rec[2];
            b = rec[1];
        }
        for (int j = 0; j <= 1; j++)
        {
            if (j)
            {
                u = rec[3];
                v = rec[4];
            }
            else
            {
                u = rec[4];
                v = rec[3];
            }
            for (int k = 0; k <= 1; k++)
            {
                if (k)
                {
                    x = rec[5];
                    y = rec[6];
                }
                else
                {
                    x = rec[6];
                    y = rec[5];
                }
                if (a == v + x && y == u && a == b + u)
                {
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
    return 0;
}