from Cal_main import addStrings

# To import another file and fix directory issue
import sys
import os

sys.path.append(os.path.dirname(os.path.dirname(os.path.dirname(__file__))))


def test():
    '''
    This function is used to test our code for the following test cases.
    args: No arguments passed
    '''

    # Empty string
    assert (addStrings("")) == 0, "Empty String didn't return 0"

    # Single number
    assert (addStrings("1")) == 1, "Single number String \"1\" didn't return 1"

    # Two numbers (, seperated)
    assert (addStrings("1,2")) == 3, "Given string \"1,2\" didn't return 3"

    # N numbers (, seperated)
    assert (addStrings("1,2,3")
            ) == 6, "Given string \"1,2,3\" didn't return 6"

    # Two numbers ( \n seperated)
    assert (addStrings("1\n2")) == 3, "Given string \"1\n2\" didn't return 3"

    # N numbers ( \n seperated)
    assert (addStrings("1\n2\n3")
            ) == 6, "Given string \"1\n2\n3\" didn't return 6"

    # N numbers (, and  \n seperated)
    assert (addStrings("1\n2,3")
            ) == 6, "Given string \"1\n2,3\" didn't return 6"

    # N numbers ( custom delimiter)
    assert (addStrings("//;\n1;2;3")
            ) == 6, "Given string \"//;\n1;2;3\" didn't return 6"

    # test case for negative numbers
#     addStrings("1,2,3,-2")
#     addStrings("10,-20,30,40,-50")

    print("\nPassed all Test cases.\n")


test()
