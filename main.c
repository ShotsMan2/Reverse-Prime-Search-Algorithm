#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, asal, j, sum;

    printf("sayi ");
    scanf("%d", &sayi);

    i = sayi - 1;

    for (; i >= 2; i--)
    {
        asal = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                asal = 0;
            }
        }
        if (i == 2)
        {
            asal = 1;
        }
        if (asal == 1)
        {
            sum++;
        }
        if (sum == 3)
        {
            printf("sonuc: %d", i);
            break;
        }
    }

    return 0;
}
