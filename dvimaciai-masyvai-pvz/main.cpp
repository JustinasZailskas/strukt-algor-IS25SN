#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    const int STUDENTAI = 3;
    const int DALYKAI = 3;

    string studentai[STUDENTAI] = {"Jonas", "Mantas", "Ieva"};
    string dalykai[DALYKAI] = {"Matematika", "Programavimas", "Fizika"};

    int pazymiai[STUDENTAI][DALYKAI] = {
        {8, 9, 7},
        {6, 8, 9},
        {10, 9, 8}
    };

    cout << setw(15)<<left << "Studentas"; // Studentas

    for (int i = 0; i < DALYKAI; i++) {
        cout << setw(15)<<left << dalykai[i];
    }

    cout << setw(15) <<"Vidurkis";
    cout << endl;

    for (int j = 0; j < STUDENTAI; j++) {
        cout << setw(15)<<left << studentai[j];
        int suma = 0;
        for (int i = 0; i < DALYKAI; i++) {
            cout << setw(15)<<left << pazymiai[j][i];
            suma += pazymiai[j][i];
        }
        double vidurkis = (double)suma / DALYKAI;
        cout << setw(15)<<fixed<<setprecision(2) << vidurkis;
        cout << endl;
    }



    return 0;
}