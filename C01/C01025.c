#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"
#define inf int(1e9 + 7)
#define nmax int(1e6 + 7)
/* ...............................
hhtuann._
________ Hoang Hoang Tuan ________
__ Take Off Toward Your Dream ! __
............................... */
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
    int x1_left, y1_left, x2_left, y2_left;
    int x1_right, y1_right, x2_right, y2_right;
    scanf("%d %d %d %d", &x1_left, &y1_left, &x1_right, &y1_right);
    scanf("%d %d %d %d", &x2_left, &y2_left, &x2_right, &y2_right);
    int x3_left = min(x1_left, x2_left);
    int y3_left = min(y1_left, y2_left);
    int x3_right = max(x1_right, x2_right);
    int y3_right = max(y1_right, y2_right);
    int res = max(x3_right - x3_left, y3_right - y3_left);
    printf("%d", res * res);
    return 0;
}