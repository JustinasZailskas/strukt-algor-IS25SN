#include <iostream>
using namespace std;

void stars();
void starsV2(char, int);
int sum(int, int);
bool isEven(int);
void kintamojoPerdavimasReiksme(int);
void kintamojoPerdavimasAdresu(int&);

int main() {
    // char zenklas;
    // int zenkluKiekis;
    // cout <<"Iveskite skiriamaji zenkla: "<<endl;
    // cin>>zenklas;
    // cout <<"Kiek kartu zenklas turi pasikartoti" <<endl;
    // cin >>zenkluKiekis;
    // starsV2('=', 70);
    // cout<<"Duomenu tipas       Ilgis       Diapazonas \n";
    // stars();
    // cout<<"char                 1B        -128 - 127"<<endl;
    // cout<<"short                2B        -32768 - 32767"<<endl;
    // cout<<"int                  4B        ~-2e9 - ~2e9"<<endl;
    // starsV2(zenklas, zenkluKiekis);
    //
    // cout<< "Kvieciama SUMOS funkcija. Rezultatas: " << sum(6, zenkluKiekis)<<endl;
    // cout<< "Kvieciama SUMOS funkcija. Rezultatas: " << sum(6, 8)<<endl;
    //
    // string arLyginis = isEven(zenkluKiekis) ? "Lyginis" : "Nelyginis";
    // cout << "Kvieciama lygini/nelyginis skaiciaus funkcija: "<<arLyginis<<endl;

    int skaicius = 12;

    cout<<"PRIES funkcijos kvietima: "<<skaicius<<endl;
    // kintamojoPerdavimasReiksme(skaicius);
    kintamojoPerdavimasAdresu(skaicius);
    cout<<"PO funkcijos kvietimo: "<<skaicius<<endl;

    return 0;
}
void stars() {
    for( int i = 0; i < 60; i++) {
        cout << "*";
    }
    cout << endl;
}

void starsV2(char simbolis, int kiekis) {
    for( int i = 0; i < kiekis; i++) {
        cout << simbolis;
    }
    cout << endl;
}

int sum(int num1, int num2) {
    return num1 + num2;
}

bool isEven(int num) {
    return num % 2 == 0;
}

void kintamojoPerdavimasReiksme(int skaicius) {
    cout<<"Perdavimas reiksme PRIES: "<<skaicius<<endl;
    skaicius = 5;
    cout<<"Perdavimas reiksme PO: "<<skaicius<<endl;
}

void kintamojoPerdavimasAdresu(int& skaicius) {
    cout<<"Perdavimas adresu PRIES: "<<skaicius<<endl;
    skaicius = 5;
    cout<<"Perdavimas adresu PO: "<<skaicius<<endl;
}