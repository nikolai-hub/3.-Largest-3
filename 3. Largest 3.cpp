#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>

typedef std::set<int, std::greater<int>> SetFromIntsGreater;

SetFromIntsGreater readInput() {
    SetFromIntsGreater input;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream istr(line);
    int currNumber = 0;
    while (istr >> currNumber)
    {
        input.insert(currNumber);
    }


    return input;
}

void printLargest3(const SetFromIntsGreater& uniqueNumbers) {
    int counter = 0;
    for (auto it = uniqueNumbers.begin(); it != uniqueNumbers.end(); it++)
    {
        if (counter==3)
        {
            break;
        }
        std::cout << *it << std::endl;
        counter++;
    }

}

int main()
{
    SetFromIntsGreater uniqueNumbers = readInput();
    
    printLargest3(uniqueNumbers);

    return 0;
}