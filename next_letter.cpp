/*Write a C++ program to change every letter in a given string
with the letter following it in the alphabet
(i.e. a becomes b, p becomes q, z becomes a). */

#include <iostream>

std::string changeLetter(const std::string& str){
    std::string changeit = str;

    for(int i = 0 ; i < str.length() ; i++){
        if((str[i] >= 'A' && str[i] < 'Z') || (str[i] >= 'a' && str[i] < 'z')){
            changeit[i] = str[i] + 1;
        }
        else if(str[i] == 'Z' ){
            changeit[i] = 'A';
        }
        else if(str[i] == 'z'){
            changeit[i] = 'a';
        }
        else{
            changeit[i] = str[i];
        }
    }
    return changeit;
}

int main(){

    std::string str1;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str1);

    std::string str2 = changeLetter(str1);
    std::cout << "Changed string: " << str2 << std::endl;

    return 0;
}
