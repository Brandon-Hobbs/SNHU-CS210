# CS210
Repo for CS210

Contains a few example code modules


    Summarize the project and what problem it was solving.
    This is a C++ project that analyzes a txt file for unique values/strings and then calculates the frequency of those unique strings.
    Code also lets the user search for a particular value and then have that frequency calculated.
    
    What did you do particularly well?
    I think the code is susinct and well organized. 
    
    Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
    I struggled a bit in the text file reading. When I created the file and wrote the data to the text file I couldn't figure out a 
    way to not have one extra carriage return. This caused the eof bit to be one line longer than needed and caused a few assumptions 
    to break, e.g., the second value on a line would always be a integer. the extra carriage return violated this as a space is not 
    an integer and cannot form a loop.
    
    Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
    I struggled a bit in my hardening to user input. However, after I read the documentation on cin.ignore() I 
    was able to figure out how to clear extraneous user input.
        
    What skills from this project will be particularly transferable to other projects or course work?
    The menu section with the try/catch block work well and are easy to implement and 
    I will probably use again.    
    
    How did you make this program maintainable, readable, and adaptable?
    I split the code into header/cpp/ and main. This allows the code to be expanded or 
    refactored easily. Moreover, I tried to add comments to all functions and loops.

