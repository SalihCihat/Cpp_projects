#include <iostream>
#include <string>
//write a c++ program to reverse a given string.

std::string reverseString(const std::string& str){
    std::string reversed = "";

    for(int i = str.length() - 1 ; i >=0 ; --i){
        reversed += str[i];
    }
    return reversed;
}

int main() {

    std::string str1;
    std::cout << "Enter a string : ";
    std::getline(std::cin,str1);

    std::string str2 = reverseString(str1);
    std::cout << "Reversed string is : " << str2 << std::endl;

    return 0;
}
