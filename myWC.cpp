/**Thabang sambo
18/02/2024
replicate wc **/

#include "counts.h"
#include <iostream>
#include <vector>


int main() {
	int cnt = 0; //line counter
    std::vector<std::string> data; //data
    std::string fileData; //reading each line

    // loop through the file using cin
    while (std::getline(std::cin, fileData)) {
		cnt++; //increment
        data.push_back(fileData); //store
    }
	std::vector<CharInfo> frequencyTable = characterFrequency(data); //table data
	
    std::cout << " Output: " <<cnt <<" "<<WordCounter(data)<<" "<<  charCounter(data);
	std::cout << " ["; for (const auto& entry : frequencyTable) {std::cout << entry.character << ":" << entry.count << " ";}
    std::cout << "]" << std::endl; //display output

    return 0; 
}

