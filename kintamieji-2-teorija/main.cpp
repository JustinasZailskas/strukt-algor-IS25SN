#include <iostream>
#include <string>
#include <format>
#include <iomanip>
using namespace std;

int main() {
    // cout << "Hello, World!" << endl;
    // int pirmasSkaicius = 5;
    // double antrasSkaicius = 3.9;
    //
    // cout << pirmasSkaicius << endl;
    // cout << antrasSkaicius << endl;
    //
    // int test = (int)antrasSkaicius;
    // cout << test << endl;

    int skaicius = 5;
    int a = 0;
    int c = 2;
    skaicius++;
    cout << skaicius++ << endl;
    cout << ++skaicius << endl;

    {
        int b = skaicius + 10;
        int a = skaicius + 5; //siame bloke esantis kintamasis "a" nera tas pats kaip kintamasis apibreztas 16 kodo eiluteje
        c = a + b;
        cout <<"Skaiciaus b reiksme: "<< b << endl;
        cout <<"SKaicius a reiksme: "<< a << endl;
        cout <<"Skaicius c reiksme: "<< c << endl;
    }
    // cout <<"Skaiciaus b reiksme: "<< b << endl;
    cout <<"SKaicius a reiksme: "<< a << endl;
    cout <<"Skaicius c reiksme: "<< c << endl;

    string vardasPavarde, savaitesDiena;

    cout<<"Iveskite Varda ir pavarde: "<<endl;
    getline(cin, vardasPavarde);
    cout<<vardasPavarde<<endl;
    cout<<"Iveskite savaites diena: "<<endl;
    getline(cin, savaitesDiena);
    cout<<format("Sveiki, {0}! Siandien yra {1}, kintamojo 'skaicius' reiksme: {2}", vardasPavarde, savaitesDiena, skaicius);

    return 0;
}
