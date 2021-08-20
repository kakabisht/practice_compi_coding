import string
import sys


def ispangram(str1, alphabet=string.ascii_lowercase):
    alphaset = set(alphabet)
    return alphaset <= set(str1.lower())


y = input()
x = input()
x.lower()
if (ispangram(x) == True):
    print("YES")
elif (ispangram(x) == False):
    print("NO")
