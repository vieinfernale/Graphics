#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <algorithm>

struct data
{
    int distance;
    char c;
    std::map<char, int> m;
    std::vector<int> v;
};

data solution()
{
    data d;

    std::string k = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    d.distance = 0;

    for (int i = 1; i <= k.size(); i++){
        std::cin >> d.c;
        d.m.insert({d.c, i});
    }

    for (std::pair<char,int> key : d.m) {
        d.v.push_back(key.second);
    }

    for (int i = 0; i < d.v.size() - 1; i++) {
        d.distance += std::abs(d.v[i+1] - d.v[i]);
    }

    return d;
}

int main()
{
    data d = solution();

    std::cout << d.distance;

    return 0;
}