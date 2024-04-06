#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

int min(int a, int b)
{
    return a > b ? b : a;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    // input
    int x1_l, y1_l, x2_l, y2_l;
    int x1_r, y1_r, x2_r, y2_r;
    scanf("%d %d %d %d", &x1_l, &y1_l, &x1_r, &y1_r);
    scanf("%d %d %d %d", &x2_l, &y2_l, &x2_r, &y2_r);
    int x3_left = min(x1_l, x2_l);
    int y3_left = min(y1_l, y2_l);
    int x3_right = max(x1_r, x2_r);
    int y3_right = max(y1_r, y2_r);
    int res = max(x3_right - x3_left, y3_right - y3_left);
    printf("%d", res * res);
    return 0;
}