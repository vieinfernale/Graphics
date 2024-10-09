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

# Iterate over Vertices and Edges
for i in range(V):
    for j, w in G[i]:
        print(f"V[{i+1}] --[{w}]--> V[{j+1}]")

