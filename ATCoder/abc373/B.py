def solution():
    distance = 0
    d = {}
    index = []
    k = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    s = input()
    for i in range(len(s)):
        d[i] = s[i]
    #for i in range(len(d)):
    #    print(d[i], end=' ')
    #print("\n")
    for key, value in sorted(d.items(), key=lambda item: item[1]):
        # print(f"{key} : {value}", end=' ')
        index.append(key)
    for i in range(len(index) - 1): 
        distance += abs(index[i+1] - index[i])
        
    return distance

def main():
    # tests = int(input())
    tests = 1
    for t in range(tests):
        result = solution()
        print(result)

if __name__ == "__main__":
    main()