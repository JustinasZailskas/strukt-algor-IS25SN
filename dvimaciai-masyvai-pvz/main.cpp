#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double skaiciuotiVidurki(int pazymiai[], int kiekis);
int rastiDizdiausiaPazymi(int pazymiai[], int kiekis);

int main() {

    const int STUDENTAI = 3;
    const int DALYKAI = 4;

    string studentai[STUDENTAI] = {"Jonas", "Mantas", "Ieva"};
    string dalykai[DALYKAI] = {"Matematika", "Programavimas", "Fizika", "Anglu"};

    int pazymiai[STUDENTAI][DALYKAI] = {
        {8, 9, 7, 10},
        {6, 8, 9, 8},
        {10, 9, 8, 5}
    };

    cout << setw(15)<<left << "Studentas"; // Studentas

    for (int i = 0; i < DALYKAI; i++) {
        cout << setw(15)<<left << dalykai[i]; //internal
    }

    cout << setw(15) <<"Vidurkis";
    cout << setw(25) <<"Didziausias pazymys";
    cout << endl;

    for (int j = 0; j < STUDENTAI; j++) {
        cout << setw(15)<<left << studentai[j];

        for (int i = 0; i < DALYKAI; i++) {
            cout << setw(15)<<left << pazymiai[j][i];
        }

        double vidurkis = skaiciuotiVidurki(pazymiai[j], DALYKAI);
        int maksPzymys = rastiDizdiausiaPazymi(pazymiai[j], DALYKAI);
        cout << setw(15)<<fixed<<setprecision(2) << vidurkis;
        cout << setw(25)<< maksPzymys << endl;
    }

    return 0;
}

double skaiciuotiVidurki(int pazymiai[], int kiekis) {
    int suma = 0;
    for (int i = 0; i < kiekis; i++) {
        suma += pazymiai[i];
    }
    return (double) suma / (double) kiekis;
}

int rastiDizdiausiaPazymi(int pazymiai[], int kiekis) {
    int maksPazymys = pazymiai[0];

    for( int i = 1; i < kiekis; i++) {
        if(pazymiai[i] > maksPazymys) {
            maksPazymys = pazymiai[i];
        }
    }

    return maksPazymys;
}

