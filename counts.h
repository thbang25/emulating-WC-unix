/**Thabang sambo
18/02/2024
replicate wc **/

#ifndef COUNTS_H
#define COUNTS_H

#include <string>
#include <vector>

int WordCounterPerline(const std::string& fileData); //we looking through each line
int WordCounter(const std::vector<std::string>& data); //sum the count
bool checkSpecial(char special); //check for special characters
int charCounter(const std::vector<std::string>& data); //count characters

#endif  // COUNTS_H
