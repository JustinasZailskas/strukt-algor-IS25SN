#include <iostream>

using namespace std;

int main() {

    int pasirinkimas;
    float skaicius1, skaicius2;

    do {
        cout << "====SKAIČIUOTUVAS====" <<endl;
        cout << "1 - Sudėtis" << endl;
        cout << "2 - Atimtis" << endl;
        cout << "3 - Daugyba" << endl;
        cout << "4 - Dalyba" << endl;
        cout << "0 - Iseiti" << endl;
        cout << "Pasirinkite norimą vykdyti veiksmą (1-4)" << endl;
        cin >> pasirinkimas;

        if (pasirinkimas >= 1 && pasirinkimas <= 4) {
            cout << "Iveskite pirma skaičių: " <<endl;
            cin >> skaicius1;
            cout << "Įveskite antrą skaičių: " <<endl;
            cin >> skaicius2;
        }

        switch (pasirinkimas) {
            case 1:
                cout << "Rezultatas: " << skaicius1 + skaicius2 <<endl;
            break;
            case 2:
                cout << "Rezultatas: " << skaicius1 - skaicius2 <<endl;
            break;
            case 3:
                cout << "Rezultatas: " << skaicius1 * skaicius2 <<endl;
            break;
            case 4:
                if (skaicius2 != 0) {
                    cout << "Rezultatas: " << skaicius1 / skaicius2 <<endl;
                } else {
                    cout << "Dalyba iš nulio negalima" << endl;
                }
            break;
            case 0:
                cout << "Programa baigta" << endl;
                break;
            default:
                cout << "Neteisingas pasirinkimas!" << endl;

        }
    } while (pasirinkimas != 0);

    return 0;
}