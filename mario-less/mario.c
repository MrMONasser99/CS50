#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1);

    int hashes = (h - (h - 1));
    int spaces = h-1;

    for (int i = 0; i < h; i++)
    {
        for (int s = 0; s < spaces; s++)
        {
            printf(" ");
        }
        for (int n = 0; n < hashes; n++)
        {
            printf("#");
        }
        spaces--;
        hashes++;
        printf("\n");
    }
}
