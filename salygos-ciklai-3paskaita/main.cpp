#include <iostream>
using namespace std;

int main() {

    string vaisius = "Agrastas";

    if(vaisius == "Vysnia") {
        cout << "Jus turite vysnia"<<endl;
    } else if (vaisius == "Obuolys") {
        cout << "Jus turite obuoli"<<endl;
    } else {
        cout <<"Jus turite visai kita vaisius"<<endl;
    }

    int skaicius;

    cout <<"Iveskite skaiciu: "<<endl;
    cin >> skaicius;

    if (skaicius > 10 && skaicius % 5 == 0) {
        cout<<"Skaicius didesnis uz 10 ir dalijasi is 5"<<endl;
    } else if (skaicius > 10 || skaicius % 5 == 0) {
        cout<<"Papildomas isvedimas"<<endl;
    } else {
        cout<<"Skaicius mazesnis uz 10"<<endl;
    }


    return 0;
}
