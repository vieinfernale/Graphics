#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>

struct data
{
    
};

auto solution()
{
    std::string s, s2, k, k2;
    std::vector<int> v, v2;
    int a;
    long long n, n2;
    long long max;

    std::cin >> a;
    std::cin.ignore();
    std::getline(std::cin, s);
    std::getline(std::cin, s2);
    
    for (int i = 0; i < s.size(); i++) {
        k += s[i];
        if (s[i+1] == s[s.size()]) {
            k += s[i+1];
            v.push_back(std::stoll(k));
        }
        if (s[i+1] == ' ') {
            v.push_back(std::stoll(k));
            k = "";
            i++;
        }
    }

    for (int i = 0; i < s2.size(); i++) {
        k2 += s2[i];
        if (s2[i+1] == s2[s2.size()]) {
            k2 += s2[i+1];
            v2.push_back(std::stoll(k2));
        }
        if (s2[i+1] == ' ') {
            v2.push_back(std::stoll(k2));
            k2 = "";
            i++;
        }
    }

    n = v[0];
    n2 = v2[0];

    for (int i = 0; i < v.size(); i++){
        /* std::cout << v[i] << " "; */
        if (v[i] > n) {
            n = v[i];
        }

    }

    for (int i = 0; i < v2.size(); i++) {
        /* std::cout << v2[i] << " "; */
        if (v2[i] > n2) {
            n2 = v2[i];
        }
    }

    /* std::cout << n << " " << n2 << std::endl; */

    max = n + n2;

    return max;
}

int main()
{
    auto result = solution();

    std::cout << result << std::endl;
    
    return 0;
}