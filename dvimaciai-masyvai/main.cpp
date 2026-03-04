#include <iostream>
using namespace std;

int main() {
    int eilutes = 3, stulpelis = 3;
    int masyvas[eilutes][stulpelis];

    cout <<"Iveskite "<<eilutes<<"x"<<stulpelis<<" masyvo elementus"<<endl;

    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpelis; j++) {
            cout <<  "Elementas ["<<i<<"]["<<j<<"] : "<<endl;
            cin >> masyvas[i][j];
        }
    }

    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpelis; j++) {
            cout <<  masyvas[i][j]<<" ";
        }
        cout << endl;
    }

    for (int i = 0; i < eilutes; i++) {
        int eilutesSuma = 0;
        for (int j = 0; j < stulpelis; j++) {
            eilutesSuma = eilutesSuma + masyvas[i][j]; // galima pakeisti eilutesSuma += masyvas[i][j]
        }
        cout << "Eilutes "<< i + 1 <<" suma: "<< eilutesSuma << endl;
    }

    for (int j = 0; j < stulpelis; j++) {
        int stulpelioSuma = 0;
        for (int i = 0; i < eilutes; i++) {
            stulpelioSuma = stulpelioSuma + masyvas[i][j];
        }
        cout << "Stulpelio "<< j + 1 <<" suma: "<< stulpelioSuma << endl;
    }

    for (int j = 0; j < stulpelis; j++) {
        int maxStulpElem = masyvas[0][j];
        for (int i = 1; i < eilutes; i++) {
            if (maxStulpElem < masyvas[i][j]) {
                maxStulpElem = masyvas[i][j];
            }
        }
        cout << "Stulpelio "<< j + 1 <<" didziausias elementas yra: "<< maxStulpElem << endl;
    }

    return 0;
}
