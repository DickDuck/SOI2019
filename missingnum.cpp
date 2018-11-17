#include "soi.h"
void main() {
    int listengroesse;
    cin >> listengroesse;

    vector<int> Vector(0);

    for(int d = 0; d < listengroesse; d++) {
        int Zahl;
        cin >> Zahl;
        Vector.push_back(Zahl);
    }
    sort(Vector.begin(),Vector.end());

    //cout << Vector << "\n";      //MIT DIFFERENZEN ARBEITEN!!!!

    int Antw = 0;

    int kleiner;
    kleiner = listengroesse - 1;

    for(int i = 0; i < listengroesse; i++) {
        int Diff;
        Diff = Vector[i + 1] - Vector[i];
        //cout << Vector[i+1] << "   " << Vector[i] << "\n";
        //cout << Diff << "Diff" << "\n";

        if(i == kleiner) {
            Antw = Vector[i] + 1;
        }

        else if(Diff > 1){
            Antw = Vector[i] + 1;
            break;
        }
    }
    cout << Antw;
}