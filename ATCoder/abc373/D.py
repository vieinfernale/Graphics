N, M = map(int, input().split())
# Graph G with N vertices and M edges
""" 
input() returns the user input as a string "1 2"
.split(" ") breaks down the whitespaces of the string and transform the rest of the elements into a list of substrings ["1", "2"]
map(int, []) assigns the function int into every single element of the list / for x in map: print(x) 1 2 / print(list(map)) [1, 2]

"""

# Graph

G = [[] for _ in range(N)]
# Create N empty lists inside the list G: G = [[]. [], [], ... xN]
# Vertex: G[i] = V[i] = [(V[x],E[i]), (V[y],-E[y]), ...]
# Edges: E[i]: V[i] --w--> V[x] / -E[y]: V[y] --w--> V[i]
# Graph: list of vertices where each vertex V holds a list of tuples (V,E) representing connected vertices and edge values

# G = [ V[0], V[1], V[2], ... V[N-1] ]
# V[i] = [ (V[i+1],E[i]), (V[i+2],E[i]), (V[i+3],-E[i+3]), ... ]

for _ in range(M):

    i, j, w = map(int, input().split())
    # V[j] - V[i] = E[i] = w

    i = i - 1
    j = j - 1
    # i,j inside the index range [0 ... N-1] 
    # to avoid out of index errors

    G[i].append((j, w))
    G[j].append((i, -w))

    # V[i] --w--> V[j]
    # V[i] = [(Vj,w)]
    # V[j] = [(Vi,-w)]

# DFS

visited = [False] * N
# visited = [Flase, False, False, ... xN]

V = [0] * N
# Values of the vertices: V[i]

for x in range(N):
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
                V[j] = V[i] + w 
                # V[j] - V[i] = w
                L.append(j)
                # Inspect the vertex V[j] 
                # until there are no more connected vertices

for v in V:
    print(v, end=" ")
# Values of the vertices

"""
3 3
1 2 2   V[1] -2-> V[2]        V[2] - V[1] = 2
3 2 3   V[3] -3-> V[2]        V[2] - V[3] = 3
1 3 -1  V[1] -(-1)-> V[3]     V[3] - V[1] = -1

V[1] = 0, V[2] = 2, V[3] = -1
"""










