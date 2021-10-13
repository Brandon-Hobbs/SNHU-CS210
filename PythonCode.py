#global locations for the files
text_file = r"U:\CS-210-Python-C++\Produce.txt"
text_out = r"U:\CS-210-Python-C++\frequency.dat"


def allWords():
    
    # create the unique word list
    fHand = open(text_file, 'r')

    uniqueWordsDict = {}
    for line in fHand:
        uniqueWordsDict[line.strip()] = uniqueWordsDict.get(line.strip(), 0) + 1

    for k, v in sorted(uniqueWordsDict.items()):
        print(k, v)

    fHand.close()

def userWord(userWord):

    # create the unique word list
    #open the file
    fHand = open(text_file, 'r')

    wordCount = 0
    
    #loop through the list and check it matches the search if so add++
    for line in fHand:
        wordCount += 1 if line.strip() == userWord else 0
    
    #close the file just in case
    fHand.close()

    return wordCount

def histogram():
    
    # create the unique word list
    fHand = open(text_file, 'r')

    #make the dictionary of unique words
    uniqueWordsDict = {}
    for line in fHand:
        uniqueWordsDict[line.strip()] = uniqueWordsDict.get(line.strip(), 0) + 1

    #write the file
    with open(text_out, 'w') as outFile:
        for key, value in sorted(uniqueWordsDict.items()):
            #make the string
            stringOut = key + " " + str(value)
            outFile.write(stringOut + "\n")        

    #close the files
    fHand.close()
    outFile.close()

    