import random

# Word to guess
myword = "hangman"

for i in myword:
    print("*", end=" ")

l = len(myword)
print("Word has %d letters" % l)


def check(myword, your_word, guess1):
    '''
    Check if entered letter is correct, arguments are myword, your_word, guess1
    '''
    status = ''
    matches = 0

    for letter in myword:
        if letter in your_word:
            status += letter
        else:
            status += '*'
        if letter == guess1:
            matches += 1

    if matches > 1:
        print(matches, guess1)

    elif matches == 1:
        print(guess1)
    return status


def hangman():
    guess = 0
    guessed = False
    your_word = []
    turns = len(myword) + 1
    turns1 = turns

    print("Total turns: ", turns)
    while guess < turns1:
        guess1 = input("Enter your guess: ")
        turns -= 1

        print("Turns left", turns)

        if guess1 in your_word:
            print("You already guessed")
        elif len(guess1) == 1:

            # Appending the letters in their place
            your_word.append(guess1)
            result = check(myword, your_word, guess1)

            if result == myword:
                guessed = True
                print("You won")
                print(myword)
            else:
                print(result)
        else:
            print("Invalid entry")
        guess += 1
    if guess == turns1:
        print("You Lose, the word is {}".format(myword))


hangman()
