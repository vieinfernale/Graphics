#include <iostream>
#include <string>

struct data
{
    int count;
    std::string s;
};

data solution()
{
    data d;
    d.count = 0;

    for (int i=1; i <= 12; i++)
    {
        std::getline(std::cin, d.s);

        if (i == d.s.length())
        {
            d.count += 1;
        }
    }

    return d;
}

int main()
{
    data d = solution();
    std::cout << d.count << std::endl;
}