import math

v = input()
N = int(v)
A = list(map(int, input().split()))
total = sum(A)
avg = total/N
x = math.floor(avg + 1)
print(x)
