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
int main()
{
    // input
    int day;
    scanf("%d", &day);
    int year = day / 365;
    day -= 365 * year;
    int week = day / 7;
    day -= 7 * week;
    printf("%d %d %d", year, week, day);
    return 0;
}