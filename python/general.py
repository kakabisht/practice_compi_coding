v = input()
n = int(v)

a = list(map(int, input().split()))

l = int(min(a))
e = int(max(a))

e = a.index(e)
d = e
e = a.pop(e)
a = [e]+a
a = a[::-1]
l = a.index(l)
print(l+d)
