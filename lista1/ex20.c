//99 e 32
#include <stdio.h>

int main()
{
    int i;
    for (i = 32; i <= 99; i++)
    {
        if (((i * i) % 100 + (i * i) / 100) == i)
        {
            printf("%d\n", i * i);
        }
    }
    return 0;
}