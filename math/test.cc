#include <cstdio>
#include <math.h>

int main()
{
    int n1 = 4, n2 = 5;
    long long s=sqrt(n1);
    long long c=cbrt(n2);

    printf("Square root of %d = %lld\n", n1, s);
    printf("Cube root of %d = %lld\n", n2, c);
}
