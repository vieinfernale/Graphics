# Graph
def graph():

    V, E = map(int, input().split())
    G = []

    # Vertices
    for _ in range(V):
        G.append([])

    # Edges
    for _ in range(E):
        i, j, w = map(int, input().split())
        i -= 1  # Adjusting for 0-based indexing
        j -= 1  # Adjusting for 0-based indexing
        G[i].append((j, w))  # Append edge (j, w) to vertex i
        G[j].append((i, -w))  # Append edge (i, -w) to vertex j
    
    return G, V

# DFS
def dfs(G, V):
    
    visited = [False] * V
    # visited = [Flase, False, False, ... xN]

    Vertices = [0] * V
    # Values of the vertices: V[i]

    for x in range(V):
        # Iterate over the vertices
        # Inspect the vertex V[x]

        if (visited[x]):
            continue
        # Skip if the value is already determined

        L = [x]
        visited[x] = True

        while (L):

            i = L.pop() 
            # i = x and L = []
            # Currently at vertex V[i]

            # Inspect the vertex V[i]
            for j, w in G[i]:
                # Inspect the vertices connected to V[i]
                if (visited[j] == False):
                    visited[j] = True
                    Vertices[j] = Vertices[i] + w 
                    # V[j] - V[i] = w
                    L.append(j)
                    # Inspect the vertex V[j] 
                    # until there are no more connected vertices

    return Vertices

def main():
    G, V = graph()
    Vertices = dfs(G, V)

    for x in Vertices:
        print(x, end=" ")

if __name__ == "__main__":
    main()