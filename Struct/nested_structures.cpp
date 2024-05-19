#include <iostream>
#include <string>

struct Adres{
    std::string sehir;
    std::string ilce;

    Adres(const std::string& sehir = "", const std::string &ilce = "")
        : sehir(sehir), ilce(ilce){}
};

struct Calisan{
    std::string isim;
    std::string soyisim;
    Adres* adres;

    Calisan(const std::string& isim = "", const std::string& soyisim = "", Adres* adres = nullptr)
        : isim(isim), soyisim(soyisim), adres(adres){}

    ~Calisan(){
        delete adres;
    }
};

void printInf(const Calisan& isci){
    std::cout << "\n" << "Çalışan bilgileri" << "\n" << "-----------------" << "\n";
    std::cout << "İsim: " << isci.isim << std::endl;
    std::cout << "Soy isim: " << isci.soyisim << std::endl;

    if(isci.adres){
        std::cout << "Adres: " << isci.adres->ilce << "/" << isci.adres->sehir << std::endl;
    } else {
        std::cout << "Adres bilgisi girilmedi." << std::endl;
    }

}
int main() {

    Calisan isci1;

    isci1.adres = new Adres();

    std::cout << "Çalışan bilgilerini giriniz: " << std::endl;
    std::cout << "İsim: ";
    getline(std::cin, isci1.isim);
    std::cout << "Soyisim: ";
    getline(std::cin, isci1.soyisim);
    std::cout << "İlçe: ";
    getline(std::cin, isci1.adres->ilce);
    std::cout << "Şehir: ";
    getline(std::cin, isci1.adres->sehir);

    printInf(isci1);

    return 0;
}
