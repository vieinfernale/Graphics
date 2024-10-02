#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>

struct data
{
    int n;
    std::string s;
    std::vector<int> v;
    std::vector<std::string> v2;
    std::vector<char> v3;
    int L[3] = {1, 2, 3};
    std::array <int, 3> A;
    std::vector <std::map<std::string, int>> v4;
};

data solution()
{
    data d;
    d.n = 0;
    d.s = "string";
    d.v = {1, 2, 3};
    d.v2 = {"a1", "b2", "c3"};
    d.v3 = {'a', 'b', 'c'};
    for (int i = 0; i < sizeof(d.L)/sizeof(d.L[0]); i++){
        d.L[i] = i + 1;
    }
    d.A = {1, 2, 3};
    d.v4 = { {{"A", 1}}, {{"B", 2}}, {{"C", 3},{"D", 4}} };

    return d;
}

int main()
{
    data d = solution();

    std::cout << d.n << std::endl;
    std::cout << d.s << std::endl;

    for (int x : d.v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    for (std::string x : d.v2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    for (char x : d.v3) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    for (int x : d.A) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    for (auto& map : d.v4) {
        for (auto& key : map) {
            std::cout << key.first << " " << key.second << " ";
        }
    }
    std::cout << std::endl;

    for (int i=0; i<d.v4.size(); i++) {
        for (std::pair<std::string, int> key : d.v4[i]) {
            std::cout << key.first << " " << key.second << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}