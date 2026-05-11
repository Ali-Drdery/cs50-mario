#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;

    // ask user for height
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // make rows
    for (int i = 0; i < h; i++)
    {
        // spaces
        for (int s = 0; s < h - i - 1; s++)
        {
            printf(" ");
        }

        // left pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // gap
        printf("  ");

        // right pyramid
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        // next line
        printf("\n");
    }
}