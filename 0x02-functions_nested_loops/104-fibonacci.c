#include <stdio.h>

/**
 * main -entry point
 * Description
 * Return: 0 (Sucess)

int main(void)
{
    unsigned int a = 1, b = 2;
    unsigned int c;
    int count = 2;

    printf("%u, %u", a, b);

    while (count < 98)
    {
        c = a + b;
        printf(", %u", c);

        a = b;
        b = c;

        count++;
    }

    printf("\n");

    return 0;
}
