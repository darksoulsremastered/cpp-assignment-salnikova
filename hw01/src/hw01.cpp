#include <hw01.h>

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int hw01(int start, int end)
{

    if (start > 99 or start < 10 or end > 99 or end < 10)
    {
        return -1;
    }
    int sum = 0;

    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            sum += i % 10;
            sum += i / 10;
        }
    }
    return sum;
}
