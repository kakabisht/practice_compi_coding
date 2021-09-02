fname = input("file name? ")
word = input("word? ")
k = 0

with open(fname, 'r') as f:
    for line in f:
        words = line.split()
        for i in words:
            if(i == word):
                k = k+1

print("Occurrences of the word in the file is {}".format(k))
