#include <iostream>
using namespace std;

int main() {
    // int skaiciai[5];
    // skaiciai[3] = 15;
    // skaiciai[0] = 4;
    // skaiciai[1] = 2;
    // skaiciai[2] = skaiciai[0] + skaiciai[1];
    // skaiciai[4] = skaiciai[2] * skaiciai[3];
    //
    // cout << skaiciai[0] << endl;
    // cout << skaiciai[1] << endl;
    // cout << skaiciai[2] << endl;
    // cout << skaiciai[3] << endl;
    // cout << skaiciai[4] << endl;
    //
    // for (int i = 0; i < 5; i++) {
    //     cout << i+1 << " elemento reiksme yra lygi: "<<skaiciai[i]<<" indeksas yra "<<i<<endl;
    // }

    // int naujasSkaiciuMasyvas[5] = {};
    //
    // for(int i = 0; i < 5; i++) {
    //     cout << "Iveskite skaiciu: "<<endl;
    //     cin >> naujasSkaiciuMasyvas[i];
    // }
    //
    // for (int i = 0; i < 5; i++) {
    //     cout << i+1 << " elemento reiksme yra lygi: "<<naujasSkaiciuMasyvas[i]<<" indeksas yra "<<i<<endl;
    // }

    // int masyvas[10];
    // int elemKiekis, nuliuKiekis = 0;
    //
    // cout<<"Iveskite masyvo elementu skaiciu: "<<endl;
    // cin >> elemKiekis;
    // cout << "Iveskite masyvo elementu reiksmes"<<endl;
    // for (int i = 0; i < elemKiekis; i++) {
    //     cout<<i+1<<" - aji masyvo elementas"<<endl;
    //     cin >> masyvas[i];
    // }
    // for (int i = 0; i < elemKiekis; i++) {
    //     cout << i+1 << " elemento reiksme yra lygi: "<<masyvas[i]<<" indeksas yra "<<i<<endl;
    //     if(masyvas[i] == 0) {
    //         nuliuKiekis++;
    //     }
    // }
    //
    // // for (int i = 0; i < elemKiekis; i++) {
    // //     if(masyvas[i] == 0) {
    // //         nuliuKiekis++;
    // //     }
    // // }
    //
    // cout<<"Nuliu kiekis yra: "<<nuliuKiekis<<endl;

    int masyvas[100];
    int masyvoIlgis, pozicija;

    cout<<"Masyvo ilgis: "<<endl;
    cin >> masyvoIlgis;

    cout<<"Iveskite masyvo reiksmes"<<endl;

    for(int i = 0; i < masyvoIlgis; i++) {
        cout<<i+1<<" - aji masyvo elementas"<<endl;
        cin >> masyvas[i];
    }

    for (int i = 0; i < masyvoIlgis; i++) {
        cout << i+1 << " elemento reiksme yra lygi: "<<masyvas[i]<<" indeksas yra "<<i<<endl;
    }

    cout<<"Iveskite pozicija kuria norite istrinti: "<<endl;
    cin >> pozicija;

    //  1   2   3   4   5   6  pries trinant elementa
    //  0   1   2   3   4   5   indeksai
    //  1   3   4   5   6       po trynimo
    //  0   1   2   3   4       indeksai po trynimo
    cout <<"==========Vyksta trynimas==========" << endl;
    for (int i = pozicija - 1; i < masyvoIlgis; i++) {   //i = 2 - 1
        masyvas[i] = masyvas[i + 1];                     //masyvas[1] = 2 jisai pasikeis i ta reiksme kuri yra masyvas[2] = 3 reiksme
    }
    masyvoIlgis--;
    cout <<"==========Po trynimo==========" << endl;
    for (int i = 0; i < masyvoIlgis; i++) {
        cout << i+1 << " elemento reiksme yra lygi: "<<masyvas[i]<<" indeksas yra "<<i<<endl;
    }


    return 0;
}
