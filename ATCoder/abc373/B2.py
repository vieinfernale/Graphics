def solution():
    K = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    S = input()
    D = []
    d = 0

    for i in range(len(K)):
        for j in range(len(S)):
            if (S[j] == K[i]):
                D.append(j)
    
    """ for i in range(len(D)):
        print(D[i], end=' ')
    """

    for i in range(len(D) - 1):
        d += abs(D[i+1] - D[i]) 

    return d

def main():
    result = solution()
    print(result)


if __name__ == "__main__":
    main()