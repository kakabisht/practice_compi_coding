v = input()
n = int(v)
c = []
for i in range(1, n+1):
    c.append(i)

a = list(map(int, input().split()))
b = list(map(int, input().split()))

print(a.pop(0))
print(b.pop(0))
a.extend(b)
a = list(set(a))
a.sort()
if(a == c):
    print("I become the guy.")
else:
    print("Oh, my keyboard!")
