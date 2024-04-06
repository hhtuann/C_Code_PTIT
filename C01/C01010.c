#include <stdio.h>
#include <stdlib.h>
#define LL long long
#define hhtuan "hhtuann"

// ig: hhtuann._
// Hoang Hoang Tuan
// Take Off Toward Your Dream !

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