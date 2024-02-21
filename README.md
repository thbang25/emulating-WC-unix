# Emulating-UNIX-wc

This application counts lines, words, and characters and then displays these counts
to standard output. The application reads from standard input, std::cin, so that a command like the following will work, cat mytestfile.txt | ./myW

1. *header.h*
This header file defines the necessary structures and functions used in the program.

*structs:*
CharInfo: Represents a character and its frequency count for the character frequency table, numbers are not included and lowercase and uppercase characters are considered the same.

2. *counts.cpp:*
This source file contains the implementations of the functions declared in header.h.

characterFrequency: Computes the character frequency table it uses a vector to store the data and labels each as a key and a reference to the key being the count. 

WordCounterPerline: Counts the number of words in a single line, used to iterate through each line from data stored in the vector, and count the number of words in each line.

WordCounter: Counts the total number of words in a vector of strings and returns the total number of words.

charCounterPerline: Counts the number of characters in a single line, excluding whitespace and punctuation.

charCounter: Counts the total number of characters in a vector of strings.

ContainsNonSpecial: Checks if a word contains non-special characters.

3. *myWC.cpp*
This source file contains the main function, responsible for user input, data handling, and program execution.
