#include <iostream>

struct Ogrenci{

    std::string isim;
    std::string soyisim;
    int id;
};

//sent as pointer
void printOgrenci(Ogrenci* ogrenci){

    std::cout << "Öğrencinin ismi: " << ogrenci->isim << std::endl;
    std::cout << "Öğrencinin soyismi: " << ogrenci->soyisim << std::endl;
    std::cout << "Öğrencinin idsi: " << ogrenci->id << std::endl;
}

int main() {

    Ogrenci ogrenci1 = {"Salih Cihat", "Yalçın" , 202111034};

    printOgrenci(&ogrenci1);

    return 0;
}
