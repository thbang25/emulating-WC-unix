/**Thabang sambo
18/02/2024
replicate wc **/

#include "counts.h" 
#include <sstream>

//count the number of words
int WordCounterPerline(const std::string& fileData) {//count words per line
    std::istringstream iss(fileData);
    int WordPerlineCntr = 0;
    std::string wordinline;

    while (iss >> wordinline) {//count
    WordPerlineCntr++;}

    return WordPerlineCntr;}//word counter

int WordCounter(const std::vector<std::string>& data) {//count number of words in a vector
    int allWords = 0; //all the words added

    for (const auto& fileData : data) {//manipulate data
        allWords += WordCounterPerline(fileData);}

    return allWords;} //total number of words now summed
	
//count the number of characters but exclude special characters
bool checkSpecial(char special) {
    // a set of all possible special characters
	const std::string SpecialCharSet = "),.{!?:\"')[;]!}";
    return SpecialCharSet.find(special) != std::string::npos; //npos to check the position if special
}

int charCounter(const std::vector<std::string>& data) {
    int SpecialCntr = 0;//counter

    for (const auto& fileData : data) {
        for (char special : fileData) {
            if (!checkSpecial(special)){
                SpecialCntr++;}}}
    return SpecialCntr;
}
