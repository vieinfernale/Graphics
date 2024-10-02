def solution():
    k = input()
    s = input()
    s2 = input()

    L = []
    L2 = []
    
    for x in s.split(" "):
        L.append(int(x))
    
    for x in s2.split(" "):
        L2.append(int(x))
    
    n = L[0]
    n2 = L2[0]
    
    for i in range(len(L)):
        if (L[i] > n):
            n = L[i]
    
    for i in range(len(L2)):
        if (L2[i] > n2):
            n2 = L2[i]
    
    sum = n + n2
    
    return sum

def main():
    result = solution()
    print(result)

if __name__ == "__main__":
    main()