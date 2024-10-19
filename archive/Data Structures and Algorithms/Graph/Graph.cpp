#include <iostream>
#include <vector>

using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    // Graph = Vector (G) of Vectors (V) of Tuples (V,E) 
    vector<vector<pair<int, int>>> G(V);

    // Edges
    for (int k = 0; k < E; ++k) {
        int i, j, w;
        cin >> i >> j >> w;
        i--;  // Adjusting for 0-based indexing
        j--;  // Adjusting for 0-based indexing
        G[i].emplace_back(j, w);  // Append edge (j, w) to vertex i
        G[j].emplace_back(i, -w);  // Append edge (i, -w) to vertex j
    }

    // Iterate over Vertices and Edges
    for (int i = 0; i < V; ++i) {
        for (const pair<int, int>& edge : G[i]) {
            int j = edge.first;
            int w = edge.second;
            cout << "V[" << (i + 1) << "] --[" << w << "]--> V[" << (j + 1) << "]" << endl;
        }
    }

    return 0;
}
