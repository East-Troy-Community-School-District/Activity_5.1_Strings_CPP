/*
Accessing Strings
Pawelski
5/10/2023
C++
*/

#include <iostream>
#include <string>

int main()
{
    std::string text = "abcdefg";
    std::cout << "Length: " << text.length() << "\n";
    std::cout << "Size: " << text.size() << "\n";

    std::string word = "supercalifragilisticexpialidocious";
    std::cout << word[0] << "\n";
    std::cout << word[5] << "\n";
    std::cout << word[10] << "\n";
    std::cout << word[33] << "\n";
    std::cout << word[word.length() - 1] << "\n";
    return 0;
}
