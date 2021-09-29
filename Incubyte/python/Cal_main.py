 
def addStrings(String):
   '''
   Adding numbers present in a single string
   args:
   String: Input String
   '''
 
   if String == "":
       return 0
   elif String.isdigit():
       return(int(String))
 
   # Custom delimeters
   elif String[0] == '/' and String[2] == "[":
       list1 = String.split('\n')
       list2 = list1[0].split('[')
       list2 = list2[1:]
 
       # Storing delimeters in a list
       delimiters = []
       for s in list2:
           x = s[0:len(s)-1]
           delimiters.append(x)
 
       str1 = list1[1]
 
       for delim in delimiters:
           if delim in str1:
               str1 = str1.replace(delim, ',')
 
       numbers = str1.split(",")
       return addNumbers(numbers)
 
   # Single custom delimeter
   elif String[0] == '/':
       list1 = String.split('\n')
       delimiter = list1[0][2:]
 
       numbers = list1[1].split(delimiter)
       return addNumbers(numbers)
 
   else:
       sum = 0
       delimiter = ","
 
       if String.find('\n') != -1 and String.find(',') != -1:
           numList = []
           str1 = String.split('\n')
 
           for s in str1:
               if "," in s:
                   x = s.split(',')
                   for i in x:
                       numList.append(int(i))
               else:
                   numList.append(int(s))
 
           return addNumbers(numList)
 
       elif String.find('\n') != -1:
           delimiter = '\n'
 
       numbers = String.split(delimiter)
       print(numbers, type(numbers))
       return addNumbers(numbers)
 
 
def addNumbers(numbers):
   '''
   to add numbers present in a list
   args:
   number: list containing the numbers
   '''
   sum = 0
   flag = 0
   negativeNums = ''
   for num in numbers:
       if int(num) < 0:
           negativeNums += num + ','
           flag = 1
       if int(num) > 1000:
           continue
       sum += int(num)
   if flag == 1:
       raise Exception(
           "Negative numbers are not allowed. Number/s Entered : ", negativeNums)
 
   return sum