#define ARRAY_LENGTH(x) (sizeof(x) / sizeof((x)[0]))
#define IS_EVEN(x)  x % 2 == 0
#define IS_ODD(x)  x % 2 == 1

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}
