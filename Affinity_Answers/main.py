def read_tweets():
    '''
    A function to read the fleet of twitter tweets using a text file
    '''

    # reading tweets.txt and coverting it into lower case
    tweets = open("tweets.txt", "r")
    for line in tweets:
        check_profanity(line.lower())
    tweets.close()


def check_profanity(text):
    '''
    A function to check profanity in the tweets

    Args:
        text: The string to check for racial slurs.
    '''
    print(text)
    racial_slurs = open("racial_slurs.txt", "r")
    content = racial_slurs.read()
    content_list = content.split(",")  # Splitting the list using ","
    racial_slurs.close()

    # Using set to only consider unique values present and
    # replacing "." by space to check on the last word in the tweet
    if set(content_list).intersection(set(text.replace('.', '').split())):
        racial_slurs_list = []
        for i in set(content_list).intersection(set(text.replace('.', '').split())):
            racial_slurs_list.append(i)
        print("Number of Racial slurs present in text: {} and the word/s used are {}".format(
            len(racial_slurs_list), racial_slurs_list))
    else:
        print("This text has no racial slurs.")


read_tweets()
