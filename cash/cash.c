#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    do
    {
        c = get_int("Change owed: ");
    }
    while (c < 0);

    int x = 0, y = 0, z = 0, w = 0, t = 0, v = 0, u = 0, s = 0;

    if (c >= 25)
    {
        y = c / 25;
        c = c % 25;
    }

    if (c >= 10)
    {
        w = c / 10;
        c = c % 10;
    }

    if (c >= 5)
    {
        v = c / 5;
        c = c % 5;
    }

    if (c >= 1)
    {
        s = c / 1;
        c = c % 1;
    }

    printf("%i\n", y + w + v + s);
}
