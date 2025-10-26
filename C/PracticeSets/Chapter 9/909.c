#include <stdio.h>
#include <string.h>

struct date
{
    int mm;
    int dd;
    int yyyy;
};
// To compare the dates
int compare(struct date d1, struct date d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    // If d1.year is in the year return 1:
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
}

int main()
{
    struct date d1 = {01, 10, 2006};
    struct date d2 = {26, 9, 2025};
    printf("%d", compare(d1, d2));
    printf("\n");
    printf(" 1 -> d1 is ahead\n");
    printf("-1 -> is ahead\n");
    printf(" 0 -> equal dates \n");

    return 0;
}
