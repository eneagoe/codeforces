#include <iostream>
#include <cmath>

int main()
{
    uint64_t m, n, a, x;

    std::scanf("%lld", &m);
    std::scanf("%lld", &n);
    std::scanf("%lld", &a);

    x = std::ceil(static_cast<double>(m)/a);
    x *= std::ceil(static_cast<double>(n)/a);

    std::cout << x << std::endl;
}
