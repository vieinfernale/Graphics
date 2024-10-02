#include <bits/stdc++.h>

struct data
{
    
};

auto solution()
{
    int n;
    int a = -1e9, b = -1e9; /* -1 * 10^-9 */

    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        a = std::max(a, x);
    }

    for (int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        b = std::max(b, x);
    }

    return a + b;
}

int main()
{
    auto result = solution();

    std::cout << result << std::endl;
    
    return 0;
}