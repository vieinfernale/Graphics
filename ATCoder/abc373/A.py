def solution():
    count = 0
    L = []

    for i in range(1, 12+1):
        string = input()
        L.append(string)
    
    for i in range(len(L)):
        if i + 1 == len(L[i]):
            count += 1
    
    return count

def main():
    # tests = int(input())
    t = 1
    for _ in range(t):
        result = solution()
        print(result)

if __name__ == "__main__":
    main()