/**Thabang sambo
18/02/2024
replicate wc **/

#include "counts.h"
#include <sstream>

int WordCounterPerline(const std::string& fileData) {//count words per line
    std::istringstream iss(fileData);
    int WordPerlineCntr = 0;
    std::string wordinline;

    while (iss >> wordinline) {//count
        WordPerlineCntr++;}

    return WordPerlineCntr;}//word counter

int WordCounter(const std::vector<std::string>& data) {//count number of words in a vector
    int summ = 0; //all the words added

    for (const auto& fileData : data) {//manipulate data
        summ += WordCounterPerline(fileData);}

    return summ;} //total number of words now summed
