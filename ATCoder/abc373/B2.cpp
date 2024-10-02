#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

struct data
{
    
};

auto solution()
{
    std::string K = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    std::string S;
    std::vector<int> D;
    int d = 0;

    std::getline(std::cin, S);

    for (int i = 0; i < K.size(); i++) {
        for (int j = 0; j < S.size(); j++) {
            if (S[j] == K[i]) {
                D.push_back(j);
            }
        }
    }

    /* for (int x : D) {
        std::cout << x << " ";
    }*/

    for (int i = 0; i < D.size() - 1; i++) {
        d += abs(D[i + 1] - D[i]);
    }

    return d;
}

int main()
{
    /* data d = solution(); */
    auto result = solution();

    std::cout << result;
    
    return 0;
}