
a = list(map(int, input().split()))

n = len(a)

for i in range(0, n-1):
    count = 0
    if(a[i] % 10 == 6):
        for j in range(i+1, n):
            if(a[j] % 10 == 6):
                count += 1
    if ((count == 0)):
        print(a[i])
