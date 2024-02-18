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

    // get the number of lines
    std::cout << "Number of lines: " << cnt << std::endl;

    // test the words count
    std::cout << "Number of words: " << WordCounter(data) << std::endl;

    return 0; 
}
