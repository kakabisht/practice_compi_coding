t = int(input())
while(t > 0):
    res = []
    n = int(input())
    l = list(map(int, input().split()))
    for j in range(len(l)):
        if l[j] not in res:
            res.append(l[j])
    for j in range(len(res)):
        print(res[j], end=" ")
    print()
    t -= 1
