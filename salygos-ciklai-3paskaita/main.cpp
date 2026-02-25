#include <iostream>
using namespace std;

int main() {

    // string vaisius = "Agrastas";
    //
    // if(vaisius == "Vysnia") {
    //     cout << "Jus turite vysnia"<<endl;
    // } else if (vaisius == "Obuolys") {
    //     cout << "Jus turite obuoli"<<endl;
    // } else {
    //     cout <<"Jus turite visai kita vaisius"<<endl;
    // }
    //
    // int skaicius;
    //
    // cout <<"Iveskite skaiciu: "<<endl;
    // cin >> skaicius;
    //
    // if (skaicius > 10 && skaicius % 5 == 0) {
    //     cout<<"Skaicius didesnis uz 10 ir dalijasi is 5"<<endl;
    // } else if (skaicius > 10 || skaicius % 5 == 0) {
    //     cout<<"Papildomas isvedimas"<<endl;
    // } else {
    //     cout<<"Skaicius mazesnis uz 10"<<endl;
    // }

    // int diena;
    //
    // while(true) {
    //     cout << "\nIveskite savaites diena (1-7)"<<endl;
    //     cin>>diena;
    //     switch (diena) {
    //         case 1:
    //             cout << "Pirmadienis";
    //             break;
    //         case 2:
    //             cout <<"Antradienis";
    //             break;
    //         case 3:
    //             cout << "Treciadienis";
    //             break;
    //         case 4:
    //             cout << "Ketvirtadienis";
    //             break;
    //         case 5:
    //             cout <<"Penktadienis";
    //             break;
    //         case 6:
    //             cout << "Sestadienis";
    //             break;
    //         case 7:
    //             cout <<"Sekmadienis";
    //             break;
    //         default:
    //             cout <<"Tokios savaites dienos nera";
    //     }
    // }

    // int skaicius, suma = 0;
    // cout <<"Iveskite sveikaji skaiciu"<<endl;
    // cin>>skaicius;
    //
    // for(int i = 1; i <= skaicius; i++) {
    //     suma = suma + i; // sum += i;
    //     cout << i << endl;
    // }
    //
    // cout<<"Suma = "<<suma<<endl;

    int sk = 10;

    // while (sk < 5) {
    //     cout << "Cia yra WHILE CIKLAS"<<endl;
    // }
    // do {
    //     cout << "Cia yra DO WHILE CIKLAS"<<endl;
    // } while (sk < 5);

    int sk2;

    while (true) {
        cout <<"Iveskite skaiciu (0-baigti)";
        cin >> sk2;

        if (sk2 == 0) {
            break;
        }
        if (sk2 < 0) {
            continue;
        }
        cout <<"Priimtas skaicius: "<<sk2<<endl;
    }

    return 0;
}
