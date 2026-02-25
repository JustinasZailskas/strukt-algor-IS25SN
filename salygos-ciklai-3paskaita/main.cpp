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

    int diena;

    while(true) {
        cout << "\nIveskite savaites diena (1-7)"<<endl;
        cin>>diena;
        switch (diena) {
            case 1:
                cout << "Pirmadienis";
                break;
            case 2:
                cout <<"Antradienis";
                break;
            case 3:
                cout << "Treciadienis";
                break;
            case 4:
                cout << "Ketvirtadienis";
                break;
            case 5:
                cout <<"Penktadienis";
                break;
            case 6:
                cout << "Sestadienis";
                break;
            case 7:
                cout <<"Sekmadienis";
                break;
            default:
                cout <<"Tokios savaites dienos nera";
        }
    }


    return 0;
}
