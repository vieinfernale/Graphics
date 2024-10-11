#include <bits/stdc++.h>
#define int long long // int = long long

using namespace std;

struct graphdata {
    vector<vector<pair<int, int>>> G;
    int V;
    vector<int> Vertices;
};

graphdata dfs(vector<vector<pair<int,int>>>& G, int V){

    vector<bool> visited(V, false);
    vector<int> Vertices(V, 0);
    
    for (int x = 0; x < V; x++){
        if (visited[x] == true){
            continue;
        }
        visited[x] = true;
        vector<int> L = {x};
        while (!L.empty()){
            int i = L.back(); 
            L.pop_back();
            for (const pair<int,int>& edge : G[i]){
                int j = edge.first;
                int w = edge.second;
                if (visited[j] == false) {
                    visited[j] = true;
                    Vertices[j] = Vertices[i] + w;
                    L.emplace_back(j);
                }
            }
        }
    }

    return {G, V, Vertices};
}

graphdata graph(){
    int V, E;
    cin >> V >> E;

    // Graph = Vector (G) of Vectors (V) of Tuples (V,E) 
    vector<vector<pair<int, int>>> G(V);

    // Edges
    for (int x = 0; x < E; x++) {
        int i, j, w;
        cin >> i >> j >> w;
        i--;  // Adjusting for 0-based indexing
        j--;  // Adjusting for 0-based indexing
        G[i].emplace_back(j, w);  // Append edge (j, w) to vertex i
        G[j].emplace_back(i, -w);  // Append edge (i, -w) to vertex j
    }

    // Iterate over Vertices and Edges
    /*for (int i = 0; i < V; ++i) {
        for (const pair<int, int>& edge : G[i]) {
            int j = edge.first;
            int w = edge.second;
            cout << "V[" << (i + 1) << "] --[" << w << "]--> V[" << (j + 1) << "]" << endl;
        }
    }*/

    // dfs(G, V);

    return {G, V};
}

signed main() {

    graphdata d = graph();
    vector<vector<pair<int, int>>> G = d.G;
    int V = d.V;

    graphdata d2 = dfs(G, V);
    vector<int> Vertices = d2.Vertices;

    for (auto& x : Vertices){
        cout << x << " ";
    }


    return 0;
}
