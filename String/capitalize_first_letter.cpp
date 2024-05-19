#include <iostream>
#include <cctype> //for toupper and isalpha

/*Write a C++ program to capitalize the first letter of each word in a given string.
Words must be separated by only one space.*/

std::string capitalize_letter(const std::string& str){

    std::string capitalize = str;

    if(std::isalpha(capitalize[0])){
        capitalize[0] = std::toupper(str[0]);
    }

    for(int i = 1 ; i < str.length() ; i++){
        if (capitalize[i - 1] == ' ' && std::isalpha(capitalize[i])){
            capitalize[i] = std::toupper(capitalize[i]);
        }
    }
    return capitalize;
}

int main() {

    std::string inputString;
    std::cout << "Enter a string: ";
    getline(std::cin, inputString);

    std::string newString = capitalize_letter(inputString);
    std::cout << "Capitalized string : " << newString << std::endl;

    return 0;
}
