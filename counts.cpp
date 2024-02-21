/**Thabang sambo
18/02/2024
replicate wc **/

#include "counts.h" 
#include <sstream>

//count the number of words
int WordCounterPerline(const std::string& fileData) {//count words per line
    std::istringstream iss(fileData); 
    int WordPerlineCntr = 0;//words per line
    std::string wordinline;

    while (iss >> wordinline) {//count
	if(ContainsNonSpecial(wordinline)){//if the word in the line contains non special character
    WordPerlineCntr++;}
	}

    return WordPerlineCntr;}//word counter

int WordCounter(const std::vector<std::string>& data) {//count number of words in a vector
    int allWords = 0; //all the words added

    for (const auto& fileData : data) {//manipulate data
        allWords += WordCounterPerline(fileData);}

    return allWords;} //total number of words now summed
	

//check if the string has a combination of special and non special
bool ContainsNonSpecial(const std::string& data) {
    // a set of all possible non special characters
	const std::string characterSet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        for (char c : data) {
        if (characterSet.find(c) != std::string::npos) {
            return true;}
    }

    return false;
}
//end of count the number of words

//start count number of characters
int charCounterPerline(const std::string& fileData) {
    int charPerlineCount = 0;

    // a set of all possible non special characters
    const std::string SpecialCharacters = ".,;:'\"!?";
    for (char c : fileData) {
        // Check
        if (c != ' ' && SpecialCharacters.find(c) == std::string::npos) {//remember to check white space
            charPerlineCount++;}
    }

    return charPerlineCount;}

int charCounter(const std::vector<std::string>& data) {
    int allChars = 0;

    for (const auto& fileData : data) {
        allChars += charCounterPerline(fileData);
    }

    return allChars;//all chars summed
}
//end character count

//start mastery work yoh!!
std::vector<CharInfo> characterFrequency(const std::vector<std::string>& data) {
    std::vector<CharInfo> frequencyTable;
    const std::string characterSet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; //exclude numbers this time

    for (char c : characterSet) {
        long cnt = 0;
        for (const auto& fileData : data) {
            for (char fileChar : fileData) {
				 char lowerCases = (fileChar >= 'A' && fileChar <= 'Z') ? fileChar + 'a' - 'A' : fileChar; //try to convert to lowercase
                if (lowerCases == c) {
                    cnt++;}}
        }
        if (cnt > 0) {
            frequencyTable.push_back({c, cnt});}//add to table
    }
    return frequencyTable;
}