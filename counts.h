/**Thabang sambo
18/02/2024
replicate wc **/

#ifndef COUNTS_H
#define COUNTS_H

#include <string>
#include <vector>

struct CharInfo {char character; long count; }; //data type for character frequency table
std::vector<CharInfo> characterFrequency (const std::vector<std::string>& data); //character frequency table vector
int WordCounterPerline(const std::string& fileData); //we looking through each line
int WordCounter(const std::vector<std::string>& data); //sum the counts
int charCounter(const std::vector<std::string>& data); //count characters
bool ContainsNonSpecial(const std::string& data);//check if the word in the line contains non special character
int charCounterPerline(const std::string& fileData); //count the number of charecters

#endif  // COUNTS_H
